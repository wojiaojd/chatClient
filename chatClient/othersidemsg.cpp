#include "othersidemsg.h"
#include "ui_othersidemsg.h"

otherSideMsg::otherSideMsg(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::otherSideMsg)
{
    ui->setupUi(this);
}

otherSideMsg::~otherSideMsg()
{
    delete ui;
}
