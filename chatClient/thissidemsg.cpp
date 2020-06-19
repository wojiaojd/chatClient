#include "thissidemsg.h"
#include "ui_thissidemsg.h"

ThisSideMsg::ThisSideMsg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThisSideMsg)
{
    ui->setupUi(this);
    this->contentLayout = new QHBoxLayout(ui->wgtContent);
    this->contentLayout->setMargin(0);
    this->contentLayout->addStretch(1);
    ui->wgtContent->setLayout(this->contentLayout);
    ui->btnHeadIcon->setIcon(QIcon(":/icons/headIcon.png"));
    ui->btnHeadIcon->setIconSize(ui->btnHeadIcon->size());
    ui->lbUserName->setText("吴同学");
    this->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
}

ThisSideMsg::~ThisSideMsg()
{
    delete ui;
}
void ThisSideMsg::setText(const QString &msg)
{

    textMsg = new QLabel(this);
    textMsg->setStyleSheet("QLabel{"
                           "background-color:rgb(158,234,106);"
                           "color:black;"
                           "border-radius:4px;"
                           "border-top-right-radius:0px;"
                           "}");
    textMsg->setText(msg);
    textMsg->setFont(QFont("微软雅黑", 11));
    textMsg->setMargin(5);
    textMsg->setWordWrap(true);
    this->contentLayout->addWidget(textMsg);
    textMsg->installEventFilter(this);
}

void ThisSideMsg::setUserName(const QString &userName)
{
    ui->lbUserName->setText(userName);
}

bool ThisSideMsg::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == this->textMsg && event->type() == QEvent::MouseButtonPress)
    {

    }
    return QWidget::eventFilter(watched, event);
}
