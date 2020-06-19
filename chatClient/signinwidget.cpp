#include "signinwidget.h"
#include "ui_signinwidget.h"
#include "signinwidget_1.h"
#include <QBitmap>
#include <QPainter>
#include <QEvent>
#include <QDebug>

signinWidget::signinWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::signinWidget)
{
    ui->setupUi(this);

    this->oldPos = this->geometry().topLeft();

    setWindowFlag(Qt::FramelessWindowHint);
    QBitmap widgetBmp(this->size());
    widgetBmp.fill();
    QPainter painter(&widgetBmp);
    painter.setPen(Qt::SolidLine);
    painter.setBrush(Qt::black);
    painter.setRenderHints(QPainter::Antialiasing);
    painter.drawRoundedRect(widgetBmp.rect(), 4, 4);
    setMask(widgetBmp);
    this->setStyleSheet("QWidget{"
                        "background-color:rgb(245,245,245);"
                        "}");

    //标题标签
    ui->lbTitle->setStyleSheet("QLabel{"
                               "color:rgb(135,135,135);"
                               "}");
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
    ui->btnConfig->setStyleSheet("QPushButton{"
                                 "border:0px;"
                                 "background-color:rgb(245,245,245);"
                                 "color:white;"
                                 "}");
    ui->btnConfig->installEventFilter(this);
    ui->btnConfig->setIcon(QPixmap(":/icons/config.png"));
    ui->btnConfig->setIconSize(ui->btnConfig->size());
    //用户头像
    ui->btnHeadIcon->setStyleSheet("QToolButton{"
                                   "border-radius:4px;"
                                   "background-color:rgb(227,227,227);"
                                   "}");
    ui->btnHeadIcon->setIcon(QIcon(":/icons/headIcon.png"));
    ui->btnHeadIcon->setIconSize(ui->btnHeadIcon->size());
    //用户名
    ui->lbName->setStyleSheet("QLabel{"
                              "color:rgb(135,135,135);"
                              "}");
    //登录按钮
    ui->btnSignin->setStyleSheet("QPushButton{"
                                 "border:0px;"
                                 "background-color:rgb(26,173,25);"
                                 "color:white;"
                                 "}");
    ui->btnSignin->installEventFilter(this);
    //切换用户按钮
    ui->lbChangeUsr->setStyleSheet("QLabel{"
                                   "color:rgb(67,104,149);"
                                   "}");
    ui->lbChangeUsr->installEventFilter(this);
    //连接两个登录窗口
    this->signinWgt = new signinWidget_1();
    connect(this->signinWgt, &signinWidget_1::backToSigninWidget, this, &signinWidget::showWidget);

    //通信处理器
    sockHandler = new SockHandler(this);
    connect(ui->btnSignin, &QPushButton::clicked, sockHandler, &SockHandler::connectServer);
    connect(sockHandler, &QTcpSocket::connected, [=](){
        qDebug()<<"连接成功";
    });

}

 bool signinWidget::eventFilter(QObject *watched, QEvent *event)
 {
     if(watched == ui->btnClose){
         if(event->type() == QEvent::Enter)
         {
             ui->btnClose->setStyleSheet("QPushButton{"
                                         "border:0px;"
                                         "background-color:rgb(250,81,81);"
                                         "color:white;"
                                         "border-top-right-radius:4px;"
                                         "}");
         }
         else if (event->type() == QEvent::Leave)
         {
             ui->btnClose->setStyleSheet("QPushButton{"
                                         "border:0px;"
                                         "background-color:rgb(245,245,245);"
                                         "color:white;"
                                         "border-top-right-radius:4px;"
                                         "}");
         }
     }
     else if(watched == ui->btnConfig)
     {
         if(event->type() == QEvent::Enter)
         {
             ui->btnConfig->setStyleSheet("QPushButton{"
                                          "border:0px;"
                                          "background-color:rgb(227,227,227);"
                                          "color:white;"
                                          "}");
         }
         else if(event->type() == QEvent::Leave)
         {
             ui->btnConfig->setStyleSheet("QPushButton{"
                                          "border:0px;"
                                          "background-color:rgb(245,245,245);"
                                          "color:white;"
                                          "}");
         }
     }
     else if(watched == ui->btnSignin)
     {
         if(event->type() == QEvent::Enter)
         {
             ui->btnSignin->setStyleSheet("QPushButton{"
                                          "border:0px;"
                                          "background-color:rgb(18,150,17);"
                                          "color:white;"
                                          "}");
         }
         else if(event->type() == QEvent::Leave)
         {
             ui->btnSignin->setStyleSheet("QPushButton{"
                                          "border:0px;"
                                          "background-color:rgb(26,173,25);"
                                          "color:white;"
                                          "}");
         }
     }
     else if(watched == ui->lbChangeUsr)
     {
         if(event->type() == QEvent::MouseButtonPress)
         {
             this->hide();
             this->signinWgt->move(this->pos());
             this->signinWgt->show();
         }
     }

    return QWidget::eventFilter(watched, event);
 }
 //鼠标点击事件
void signinWidget::mousePressEvent(QMouseEvent *event)
 {
     if(event->button() == Qt::LeftButton)
     {
         this->oldPos = event->pos();
         event->accept();
     }
 }
//鼠标移动事件
void signinWidget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->buttons() == Qt::LeftButton)
    {
        if(ui->wgtTitle->geometry().contains(mapFromGlobal(QCursor::pos())))
        {
            move(event->globalPos() - oldPos);
            event->accept();
        }
    }
}
void signinWidget::showWidget(const QPoint &point)
{
    this->move(point);
    this->show();
}
signinWidget::~signinWidget()
{
    delete ui;
    delete signinWgt;
}
