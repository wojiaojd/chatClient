/********************************************************************************
** Form generated from reading UI file 'newfriend.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWFRIEND_H
#define UI_NEWFRIEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewFriend
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLabel *lbHeadIcon;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout;
    QLabel *lbUserName;
    QLabel *lbMsg;
    QPushButton *btnAccept;

    void setupUi(QWidget *NewFriend)
    {
        if (NewFriend->objectName().isEmpty())
            NewFriend->setObjectName(QStringLiteral("NewFriend"));
        NewFriend->resize(390, 75);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(NewFriend->sizePolicy().hasHeightForWidth());
        NewFriend->setSizePolicy(sizePolicy);
        NewFriend->setMinimumSize(QSize(0, 75));
        NewFriend->setMaximumSize(QSize(16777215, 75));
        horizontalLayout_2 = new QHBoxLayout(NewFriend);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(NewFriend);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(10);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(40, 15, 40, 15);
        lbHeadIcon = new QLabel(widget);
        lbHeadIcon->setObjectName(QStringLiteral("lbHeadIcon"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbHeadIcon->sizePolicy().hasHeightForWidth());
        lbHeadIcon->setSizePolicy(sizePolicy1);
        lbHeadIcon->setMinimumSize(QSize(50, 50));
        lbHeadIcon->setMaximumSize(QSize(50, 50));

        horizontalLayout->addWidget(lbHeadIcon);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        verticalLayout = new QVBoxLayout(widget_2);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lbUserName = new QLabel(widget_2);
        lbUserName->setObjectName(QStringLiteral("lbUserName"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        lbUserName->setFont(font);

        verticalLayout->addWidget(lbUserName);

        lbMsg = new QLabel(widget_2);
        lbMsg->setObjectName(QStringLiteral("lbMsg"));
        lbMsg->setFont(font);

        verticalLayout->addWidget(lbMsg);


        horizontalLayout->addWidget(widget_2);

        btnAccept = new QPushButton(widget);
        btnAccept->setObjectName(QStringLiteral("btnAccept"));
        sizePolicy1.setHeightForWidth(btnAccept->sizePolicy().hasHeightForWidth());
        btnAccept->setSizePolicy(sizePolicy1);
        btnAccept->setMinimumSize(QSize(45, 25));
        btnAccept->setMaximumSize(QSize(45, 25));
        btnAccept->setFont(font);
        btnAccept->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(btnAccept);


        horizontalLayout_2->addWidget(widget);


        retranslateUi(NewFriend);

        QMetaObject::connectSlotsByName(NewFriend);
    } // setupUi

    void retranslateUi(QWidget *NewFriend)
    {
        NewFriend->setWindowTitle(QApplication::translate("NewFriend", "Form", Q_NULLPTR));
        lbHeadIcon->setText(QString());
        lbUserName->setText(QApplication::translate("NewFriend", "UserName", Q_NULLPTR));
        lbMsg->setText(QApplication::translate("NewFriend", "New Friend Msg", Q_NULLPTR));
        btnAccept->setText(QApplication::translate("NewFriend", "\346\216\245\345\217\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewFriend: public Ui_NewFriend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWFRIEND_H
