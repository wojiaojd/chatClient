/********************************************************************************
** Form generated from reading UI file 'othersidemsg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OTHERSIDEMSG_H
#define UI_OTHERSIDEMSG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_otherSideMsg
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *wdgLeft;
    QVBoxLayout *verticalLayout;
    QPushButton *btnHeadIcon;
    QSpacerItem *verticalSpacer;
    QWidget *wgtRight;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbUserName;
    QWidget *wgtContent;

    void setupUi(QWidget *otherSideMsg)
    {
        if (otherSideMsg->objectName().isEmpty())
            otherSideMsg->setObjectName(QStringLiteral("otherSideMsg"));
        otherSideMsg->resize(439, 73);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(otherSideMsg->sizePolicy().hasHeightForWidth());
        otherSideMsg->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(otherSideMsg);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, 0);
        wdgLeft = new QWidget(otherSideMsg);
        wdgLeft->setObjectName(QStringLiteral("wdgLeft"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wdgLeft->sizePolicy().hasHeightForWidth());
        wdgLeft->setSizePolicy(sizePolicy1);
        verticalLayout = new QVBoxLayout(wdgLeft);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        btnHeadIcon = new QPushButton(wdgLeft);
        btnHeadIcon->setObjectName(QStringLiteral("btnHeadIcon"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(btnHeadIcon->sizePolicy().hasHeightForWidth());
        btnHeadIcon->setSizePolicy(sizePolicy2);
        btnHeadIcon->setMinimumSize(QSize(36, 36));
        btnHeadIcon->setMaximumSize(QSize(36, 36));

        verticalLayout->addWidget(btnHeadIcon);

        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(wdgLeft);

        wgtRight = new QWidget(otherSideMsg);
        wgtRight->setObjectName(QStringLiteral("wgtRight"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wgtRight->sizePolicy().hasHeightForWidth());
        wgtRight->setSizePolicy(sizePolicy3);
        verticalLayout_2 = new QVBoxLayout(wgtRight);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        lbUserName = new QLabel(wgtRight);
        lbUserName->setObjectName(QStringLiteral("lbUserName"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(lbUserName->sizePolicy().hasHeightForWidth());
        lbUserName->setSizePolicy(sizePolicy4);
        lbUserName->setMinimumSize(QSize(0, 15));
        lbUserName->setMaximumSize(QSize(16777215, 15));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        lbUserName->setFont(font);

        verticalLayout_2->addWidget(lbUserName);

        wgtContent = new QWidget(wgtRight);
        wgtContent->setObjectName(QStringLiteral("wgtContent"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(wgtContent->sizePolicy().hasHeightForWidth());
        wgtContent->setSizePolicy(sizePolicy5);

        verticalLayout_2->addWidget(wgtContent);


        horizontalLayout->addWidget(wgtRight);


        retranslateUi(otherSideMsg);

        QMetaObject::connectSlotsByName(otherSideMsg);
    } // setupUi

    void retranslateUi(QWidget *otherSideMsg)
    {
        otherSideMsg->setWindowTitle(QApplication::translate("otherSideMsg", "Form", Q_NULLPTR));
        btnHeadIcon->setText(QApplication::translate("otherSideMsg", "PushButton", Q_NULLPTR));
        lbUserName->setText(QApplication::translate("otherSideMsg", "UserName", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class otherSideMsg: public Ui_otherSideMsg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OTHERSIDEMSG_H
