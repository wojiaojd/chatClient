#include "chatermessagebox.h"
#include "ui_chatermessagebox.h"
#include <QBitmap>
#include <QPainter>
#include <QDebug>

chaterMessageBox::chaterMessageBox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::chaterMessageBox)
{
    ui->setupUi(this);
    this->move(parent->width()/2 - width()/2, parent->height()/2 - height()/2);
    this->setAttribute(Qt::WA_DeleteOnClose);
    setWindowFlag(Qt::FramelessWindowHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setStyleSheet("QWidget{"
                  "border-radius:15px;"
                  "color:gray;"
                  "background-color:rgb(250,250,250);"
                  "}"
                  "QPushButton{"
                  "background-color:rgb(75,183,232);"
                  "border-radius:8px;"
                  "color:white;"
                  "}"
                  "QLabel{"
                  "border-radius:8px;"
                  "color:gray;"
                  "}");
    ui->lbMessageIcon->setPixmap(QPixmap(":/icons/message.png").scaled(ui->lbMessageIcon->size()));
    ui->lbMessageText->setAlignment(Qt::AlignCenter);
    ui->lbMessageText->setFont(QFont("微软雅黑", 10));
    ui->btnMessage->setFont(QFont("微软雅黑", 10));
    ui->btnMessage->setText("确定");
    connect(ui->btnMessage, &QPushButton::clicked, this, &QWidget::close);
}
void chaterMessageBox::setText(const QString &text)
{
    ui->lbMessageText->setText(text);
}

chaterMessageBox::~chaterMessageBox()
{
    delete ui;
}
