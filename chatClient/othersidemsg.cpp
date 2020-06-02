#include "othersidemsg.h"
#include "ui_othersidemsg.h"

otherSideMsg::otherSideMsg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::otherSideMsg)
{
    ui->setupUi(this);
    this->contentLayout = new QHBoxLayout(ui->wgtContent);
    this->contentLayout->setMargin(0);
    ui->btnHeadIcon->setIcon(QIcon(":/icons/headIcon.png"));
    ui->btnHeadIcon->setIconSize(ui->btnHeadIcon->size());
    ui->lbUserName->setText("吴同学");

}

otherSideMsg::~otherSideMsg()
{
    delete ui;
}

void otherSideMsg::setText(const QString &msg)
{
    QLabel *textMsg = new QLabel(this);
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
}

void otherSideMsg::setUserName(const QString &userName)
{
    ui->lbUserName->setText(userName);
}
