/********************************************************************************
** Form generated from reading UI file 'thissidemsg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THISSIDEMSG_H
#define UI_THISSIDEMSG_H

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

class Ui_ThisSideMsg
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QWidget *wgtRight;
    QVBoxLayout *verticalLayout_2;
    QLabel *lbUserName;
    QWidget *wgtContent;
    QWidget *wdgLeft;
    QVBoxLayout *verticalLayout;
    QPushButton *btnHeadIcon;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *ThisSideMsg)
    {
        if (ThisSideMsg->objectName().isEmpty())
            ThisSideMsg->setObjectName(QStringLiteral("ThisSideMsg"));
        ThisSideMsg->resize(337, 54);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ThisSideMsg->sizePolicy().hasHeightForWidth());
        ThisSideMsg->setSizePolicy(sizePolicy);
        ThisSideMsg->setMinimumSize(QSize(300, 0));
        horizontalLayout_2 = new QHBoxLayout(ThisSideMsg);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 3, 0, 3);
        widget = new QWidget(ThisSideMsg);
        widget->setObjectName(QStringLiteral("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        wgtRight = new QWidget(widget);
        wgtRight->setObjectName(QStringLiteral("wgtRight"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(wgtRight->sizePolicy().hasHeightForWidth());
        wgtRight->setSizePolicy(sizePolicy1);
        verticalLayout_2 = new QVBoxLayout(wgtRight);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(-1, 0, 0, 0);
        lbUserName = new QLabel(wgtRight);
        lbUserName->setObjectName(QStringLiteral("lbUserName"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lbUserName->sizePolicy().hasHeightForWidth());
        lbUserName->setSizePolicy(sizePolicy2);
        lbUserName->setMinimumSize(QSize(0, 15));
        lbUserName->setMaximumSize(QSize(16777215, 15));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        lbUserName->setFont(font);
        lbUserName->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        verticalLayout_2->addWidget(lbUserName);

        wgtContent = new QWidget(wgtRight);
        wgtContent->setObjectName(QStringLiteral("wgtContent"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(wgtContent->sizePolicy().hasHeightForWidth());
        wgtContent->setSizePolicy(sizePolicy3);

        verticalLayout_2->addWidget(wgtContent);


        horizontalLayout->addWidget(wgtRight);

        wdgLeft = new QWidget(widget);
        wdgLeft->setObjectName(QStringLiteral("wdgLeft"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(wdgLeft->sizePolicy().hasHeightForWidth());
        wdgLeft->setSizePolicy(sizePolicy4);
        verticalLayout = new QVBoxLayout(wdgLeft);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(-1, 0, -1, -1);
        btnHeadIcon = new QPushButton(wdgLeft);
        btnHeadIcon->setObjectName(QStringLiteral("btnHeadIcon"));
        QSizePolicy sizePolicy5(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(btnHeadIcon->sizePolicy().hasHeightForWidth());
        btnHeadIcon->setSizePolicy(sizePolicy5);
        btnHeadIcon->setMinimumSize(QSize(36, 36));
        btnHeadIcon->setMaximumSize(QSize(36, 36));

        verticalLayout->addWidget(btnHeadIcon);

        verticalSpacer = new QSpacerItem(20, 3, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addWidget(wdgLeft);


        horizontalLayout_2->addWidget(widget);


        retranslateUi(ThisSideMsg);

        QMetaObject::connectSlotsByName(ThisSideMsg);
    } // setupUi

    void retranslateUi(QWidget *ThisSideMsg)
    {
        ThisSideMsg->setWindowTitle(QApplication::translate("ThisSideMsg", "Form", Q_NULLPTR));
        lbUserName->setText(QApplication::translate("ThisSideMsg", "wojiaojdwojiaojdwojiaojd", Q_NULLPTR));
        btnHeadIcon->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ThisSideMsg: public Ui_ThisSideMsg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THISSIDEMSG_H
