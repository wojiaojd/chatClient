/********************************************************************************
** Form generated from reading UI file 'friendlistitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDLISTITEM_H
#define UI_FRIENDLISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FriendListItem
{
public:
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbHeadIcon;
    QLabel *lbUserName;

    void setupUi(QWidget *FriendListItem)
    {
        if (FriendListItem->objectName().isEmpty())
            FriendListItem->setObjectName(QStringLiteral("FriendListItem"));
        FriendListItem->resize(250, 58);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(FriendListItem->sizePolicy().hasHeightForWidth());
        FriendListItem->setSizePolicy(sizePolicy);
        FriendListItem->setMinimumSize(QSize(230, 58));
        FriendListItem->setMaximumSize(QSize(250, 58));
        horizontalLayout = new QHBoxLayout(FriendListItem);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 0, 5, 0);
        widget = new QWidget(FriendListItem);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setSpacing(10);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbHeadIcon = new QLabel(widget);
        lbHeadIcon->setObjectName(QStringLiteral("lbHeadIcon"));
        sizePolicy.setHeightForWidth(lbHeadIcon->sizePolicy().hasHeightForWidth());
        lbHeadIcon->setSizePolicy(sizePolicy);
        lbHeadIcon->setMinimumSize(QSize(40, 40));
        lbHeadIcon->setMaximumSize(QSize(40, 40));

        horizontalLayout_2->addWidget(lbHeadIcon);

        lbUserName = new QLabel(widget);
        lbUserName->setObjectName(QStringLiteral("lbUserName"));
        sizePolicy.setHeightForWidth(lbUserName->sizePolicy().hasHeightForWidth());
        lbUserName->setSizePolicy(sizePolicy);
        lbUserName->setMinimumSize(QSize(187, 25));
        lbUserName->setMaximumSize(QSize(187, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        lbUserName->setFont(font);

        horizontalLayout_2->addWidget(lbUserName);


        horizontalLayout->addWidget(widget);


        retranslateUi(FriendListItem);

        QMetaObject::connectSlotsByName(FriendListItem);
    } // setupUi

    void retranslateUi(QWidget *FriendListItem)
    {
        FriendListItem->setWindowTitle(QApplication::translate("FriendListItem", "Form", Q_NULLPTR));
        lbHeadIcon->setText(QApplication::translate("FriendListItem", "TextLabel", Q_NULLPTR));
        lbUserName->setText(QApplication::translate("FriendListItem", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FriendListItem: public Ui_FriendListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDLISTITEM_H
