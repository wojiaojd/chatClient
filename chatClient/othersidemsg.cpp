#include "othersidemsg.h"
#include "ui_othersidemsg.h"

OtherSideMsg::OtherSideMsg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::otherSideMsg)
{
    ui->setupUi(this);
    this->contentLayout = new QHBoxLayout(ui->wgtContent);
    this->contentLayout->setMargin(0);
    ui->wgtContent->setLayout(this->contentLayout);
    ui->btnHeadIcon->setIcon(QIcon(":/icons/headIcon.png"));
    ui->btnHeadIcon->setIconSize(ui->btnHeadIcon->size());
    ui->lbUserName->setText("吴同学");

}

OtherSideMsg::~OtherSideMsg()
{
    delete ui;
}

void OtherSideMsg::setText(const QString &msg)
{

    textMsg = new QLabel(this);
    textMsg->setStyleSheet("QLabel{"
                           "background-color:white;"
                           "border-radius:4px;"
                           "border-top-left-radius:0px;"
                           "}");
    textMsg->setText(msg);
    textMsg->setFont(QFont("微软雅黑", 11));
    textMsg->setMargin(5);
    textMsg->setWordWrap(true);
    textMsg->setMaximumWidth(this->parentWidget()->width()*2);
    textMsg->setSizePolicy(QSizePolicy::Minimum, QSizePolicy::Expanding);
    this->contentLayout->addWidget(textMsg);
    this->contentLayout->addStretch();
    textMsg->installEventFilter(this);
}

void OtherSideMsg::setUserName(const QString &userName)
{
    ui->lbUserName->setText(userName);
}

bool OtherSideMsg::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == this->textMsg && event->type() == QEvent::MouseButtonPress)
    {

    }
    return QWidget::eventFilter(watched, event);
}
