#include "signinwidget_1.h"
#include "ui_signinwidget_1.h"
#include "chatermessagebox.h"
#include "mainwidget.h"
#include <QPainter>
#include <QBitmap>
#include <QMouseEvent>
#include <QDebug>
#include <QMessageBox>

signinWidget_1::signinWidget_1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signinWidget_1)
{
    ui->setupUi(this);

    this->oldMousePos = this->geometry().topLeft();
    this->isSignup = false;
    this->sockHandler = new SockHandler(this);
    this->account = "";
    //去除原窗口
    setWindowFlag(Qt::FramelessWindowHint);
    QBitmap widgetBmp(this->size());
    widgetBmp.fill();
    QPainter painter(&widgetBmp);
    painter.setPen(Qt::SolidLine);
    painter.setBrush(Qt::black);
    painter.setRenderHints(QPainter::Antialiasing);
    painter.drawRoundedRect(widgetBmp.rect(), 4, 4);
    setMask(widgetBmp);
    styleFormat = "%1{border:%2px;border-radius:%3px;color:%4;background-color:%5;height:%6px;}";
    this->setStyleSheet("QWidget{background-color:rgb(245,245,245);}");

    //标题标签
    ui->lbTitle->setStyleSheet("QLabel{color:rgb(135,135,135);}");
    //关闭按钮
    ui->btnClose->setStyleSheet("QPushButton{"
                                "border:0px;"
                                "background-color:rgb(245,245,245);"
                                "color:white;"
                                "border-top-right-radius:4px;"
                                "}");
    ui->btnClose->installEventFilter(this);
    ui->btnClose->setIcon(QPixmap(":/icons/close.png"));
    ui->btnClose->setIconSize(ui->btnClose->size());
    connect(ui->btnClose, &QPushButton::clicked, this, &QWidget::close);
    //配置按钮
    ui->btnConfig->setStyleSheet(styleFormat.arg("QPushButton","0","0","white","rgb(245,245,245)","28"));
    ui->btnConfig->installEventFilter(this);
    ui->btnConfig->setIcon(QPixmap(":/icons/config.png"));
    ui->btnConfig->setIconSize(ui->btnConfig->size());
    //欢迎标签
    ui->lbWelcome->setPixmap(QPixmap(":/icons/trip.png").scaled(ui->lbWelcome->size()));
    //账号框
    ui->ledtAccount->setStyleSheet(styleFormat.arg("QLineEdit","0","8","black","rgb(227,227,227)","25"));
    ui->ledtAccount->setAlignment(Qt::AlignCenter);
    connect(ui->ledtAccount, &QLineEdit::textEdited, [=](){
        ui->ledtAccount->setStyleSheet(styleFormat.arg("QLineEdit","0","8","black","white","25"));
    });
    connect(ui->ledtAccount, &QLineEdit::editingFinished, [=](){
        ui->ledtAccount->setStyleSheet(styleFormat.arg("QLineEdit","0","8","black","rgb(227,227,227)","25"));
    });
    //密码框
    ui->ledtPassword->setStyleSheet(styleFormat.arg("QLineEdit","0","8","black","rgb(227,227,227)","25"));
    ui->ledtPassword->setAlignment(Qt::AlignCenter);
    connect(ui->ledtPassword, &QLineEdit::textEdited, [=](){
        ui->ledtPassword->setStyleSheet(styleFormat.arg("QLineEdit","0","8","black","white","25"));
    });
    connect(ui->ledtPassword, &QLineEdit::editingFinished, [=](){
        ui->ledtPassword->setStyleSheet(styleFormat.arg("QLineEdit","0","8","black","rgb(227,227,227)","25"));
    });

    //登录按钮
    ui->btnSignin->setStyleSheet(styleFormat.arg("QPushButton","0","0","white","rgb(26,173,25)","40"));
    ui->btnSignin->installEventFilter(this);
    //点击按钮连接服务器


    //注册通道
    ui->lbSignup->setStyleSheet("QLabel{color:rgb(67,104,149);}");
    ui->lbSignup->installEventFilter(this);
    //返回按钮
    ui->lbBack->setStyleSheet("QLabel{color:rgb(67,104,149);}");
    ui->lbBack->installEventFilter(this);
}
bool signinWidget_1::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->btnClose){
        QString closeBtnStyle("QPushButton{border:0px;background-color:%1;border-top-right-radius:4px;}");
        if(event->type() == QEvent::Enter)
        {
            ui->btnClose->setStyleSheet(closeBtnStyle.arg("rgb(250,81,81)"));
        }
        else if (event->type() == QEvent::Leave)
        {
            ui->btnClose->setStyleSheet(closeBtnStyle.arg("rgb(245,245,245)"));
        }
    }
    else if(watched == ui->btnConfig)
    {
        QString configBtnStyle("QPushButton{border:0px;");
        if(event->type() == QEvent::Enter)
        {
            ui->btnConfig->setStyleSheet(styleFormat.arg("QPushButton","0","0","white","rgb(227,227,227)","28"));
        }
        else if(event->type() == QEvent::Leave)
        {
            ui->btnConfig->setStyleSheet(styleFormat.arg("QPushButton","0","0","white","rgb(245,245,245)","28"));
        }
    }
    else if(watched == ui->btnSignin)
    {
        if(event->type() == QEvent::Enter)
        {
            ui->btnSignin->setStyleSheet(styleFormat.arg("QPushButton","0","0","white","rgb(18,150,17)","40"));
        }
        else if(event->type() == QEvent::Leave)
        {
            ui->btnSignin->setStyleSheet(styleFormat.arg("QPushButton","0","0","white","rgb(26,173,25)","40"));
        }
        if(event->type() == QEvent::MouseButtonPress)
        {
            if(!this->isSignup)
            {
                //当前是登录界面
                disconnect(sockHandler, nullptr, nullptr, nullptr);
                connect(sockHandler, &QTcpSocket::connected, [=](){
                    qDebug()<<"连接成功";
                    qDebug() << "用户登录";
                    QByteArray account = ui->ledtAccount->text().toUtf8();
                    QByteArray password = ui->ledtPassword->text().toUtf8();
                    if(!LegalityCheck::validUserData(account, password))
                        sockHandler->disconnectFromHost();
                    sockHandler->signin(account, password);
                });
                connect(sockHandler, &QTcpSocket::readyRead, [=](){
                   if(sockHandler->signinRecv())
                   {
                       qDebug() << "登录成功";
                       mainWidget *mnWdgt = new mainWidget;
                       mnWdgt->show();
                       this->hide();
                   }
                });
                this->sockHandler->connectServer();
            }
            else
            {
                //当前是注册界面
                disconnect(sockHandler, nullptr, nullptr, nullptr);
                connect(sockHandler, &QTcpSocket::connected, [=](){
                    qDebug()<<"连接成功";
                    qDebug() << "用户注册";
                    QByteArray fstPsw = ui->ledtPassword->text().toUtf8();
                    QFormLayout *layout = static_cast<QFormLayout*>(ui->widget_2->layout());
                    QLineEdit *sndPswLedt = static_cast<QLineEdit*>(layout->itemAt(layout->count()-1)->widget());
                    QByteArray sndPsw = sndPswLedt->text().toUtf8();
                    QByteArray usrName = ui->ledtAccount->text().toUtf8();
                    if(!LegalityCheck::validUserData(usrName, fstPsw, sndPsw))
                    {
                        sockHandler->disconnectFromHost();
                        chaterMessageBox *ctMsgBox = new chaterMessageBox(this);
                        ctMsgBox->setText("您的输入不合适\n");
                        ctMsgBox->show();
                    }
                    sockHandler->signup(usrName, fstPsw);

                });
                connect(sockHandler, &SockHandler::readyRead, [=](){
                    this->account = sockHandler->signupRecv();
                    //注册成功，提示账号
                    chaterMessageBox *ctMsgBox = new chaterMessageBox(this);
                    ctMsgBox->setText("请记住您的账号:\n"+this->account);
                    ctMsgBox->show();
                    QEvent backEvent(QEvent::MouseButtonPress);
                    QApplication::sendEvent(ui->lbBack, &backEvent);
                    ui->ledtAccount->setText(this->account.data());
                    sockHandler->disconnectFromHost();
                });
                this->sockHandler->connectServer();
            }
        }

    }
    else if(watched == ui->lbBack)
    {
        if(event->type() == QEvent::MouseButtonPress)
        {
            if(!this->isSignup)
            {
                //当前是登录界面
                this->hide();
                emit backToSigninWidget(this->pos());
            }
            else
            {
                //当前是注册界面,点击返回时返回登陆界面
                ui->lbAccout->setText("账  号:");
                ui->lbPassword->setText("密  码:");
                QFormLayout *layout = static_cast<QFormLayout*>(ui->widget_2->layout());
                layout->removeRow(2);
                ui->lbSignup->show();
                ui->btnSignin->setText("登录");
                this->isSignup = false;
            }

        }
    }
    else if(watched == ui->lbSignup)
    {
        if(event->type() == QEvent::MouseButtonPress && !this->isSignup)
        {
            //跳往注册界面
            this->isSignup = true;
            ui->lbSignup->hide();
            ui->ledtAccount->setText("");
            ui->ledtPassword->setText("");
            ui->lbAccout->setText("用户昵称:");
            ui->lbPassword->setText("输入密码:");
            QLabel *checkPassword = new QLabel("确认密码:", ui->widget_2);
            checkPassword->setFont(QFont("微软雅黑", 10));
            QLineEdit *ledtPasswordAgain = new QLineEdit(ui->widget_2);
            ledtPasswordAgain->setEchoMode(QLineEdit::Password);
            ledtPasswordAgain->setStyleSheet(styleFormat.arg("QLineEdit","0","8","black","rgb(227,227,227)","25"));
            ledtPasswordAgain->setAlignment(Qt::AlignCenter);
            ledtPasswordAgain->setFont(QFont("微软雅黑"));
            connect(ledtPasswordAgain, &QLineEdit::textEdited, [=](){
                ledtPasswordAgain->setStyleSheet(styleFormat.arg("QLineEdit","0","8","black","white","25"));
            });
            connect(ledtPasswordAgain, &QLineEdit::editingFinished, [=](){
                ledtPasswordAgain->setStyleSheet(styleFormat.arg("QLineEdit","0","8","black","rgb(227,227,227)","25"));
            });
            QFormLayout *layout = static_cast<QFormLayout*>(ui->widget_2->layout());
            layout->addRow(checkPassword, ledtPasswordAgain);
            ui->btnSignin->setText("注册");
        }
    }

   return QWidget::eventFilter(watched, event);
}
void signinWidget_1::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        QPoint mousePoint(mapFromGlobal(QCursor::pos()));
        if(ui->wgtTitle->geometry().contains(mousePoint))
        {
            this->oldMousePos = event->pos();
            event->accept();
        }
    }
}
void signinWidget_1::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() == Qt::LeftButton)
    {
        if(ui->wgtTitle->geometry().contains(mapFromGlobal(QCursor::pos())))
        {
            move(event->globalPos() - oldMousePos);
            event->accept();
        }
    }
}
signinWidget_1::~signinWidget_1()
{
    delete ui;
}
