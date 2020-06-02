/********************************************************************************
** Form generated from reading UI file 'chatlistitem.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATLISTITEM_H
#define UI_CHATLISTITEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChatListItem
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lbHeadIcon;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *lbUserName;
    QLabel *lbDate;
    QLabel *lbMostRecentMsg;
    QLabel *lbStateIcon;

    void setupUi(QWidget *ChatListItem)
    {
        if (ChatListItem->objectName().isEmpty())
            ChatListItem->setObjectName(QStringLiteral("ChatListItem"));
        ChatListItem->resize(230, 58);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ChatListItem->sizePolicy().hasHeightForWidth());
        ChatListItem->setSizePolicy(sizePolicy);
        ChatListItem->setMinimumSize(QSize(230, 58));
        ChatListItem->setMaximumSize(QSize(230, 58));
        horizontalLayout_2 = new QHBoxLayout(ChatListItem);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(5, 0, 5, 0);
        widget_2 = new QWidget(ChatListItem);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout = new QHBoxLayout(widget_2);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lbHeadIcon = new QLabel(widget_2);
        lbHeadIcon->setObjectName(QStringLiteral("lbHeadIcon"));
        sizePolicy.setHeightForWidth(lbHeadIcon->sizePolicy().hasHeightForWidth());
        lbHeadIcon->setSizePolicy(sizePolicy);
        lbHeadIcon->setMinimumSize(QSize(40, 40));
        lbHeadIcon->setMaximumSize(QSize(40, 40));

        horizontalLayout->addWidget(lbHeadIcon);

        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        lbUserName = new QLabel(widget);
        lbUserName->setObjectName(QStringLiteral("lbUserName"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbUserName->sizePolicy().hasHeightForWidth());
        lbUserName->setSizePolicy(sizePolicy1);
        lbUserName->setMinimumSize(QSize(130, 22));
        lbUserName->setMaximumSize(QSize(130, 22));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        lbUserName->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, lbUserName);

        lbDate = new QLabel(widget);
        lbDate->setObjectName(QStringLiteral("lbDate"));
        sizePolicy.setHeightForWidth(lbDate->sizePolicy().hasHeightForWidth());
        lbDate->setSizePolicy(sizePolicy);
        lbDate->setMinimumSize(QSize(45, 22));
        lbDate->setMaximumSize(QSize(45, 22));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        lbDate->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, lbDate);

        lbMostRecentMsg = new QLabel(widget);
        lbMostRecentMsg->setObjectName(QStringLiteral("lbMostRecentMsg"));
        sizePolicy.setHeightForWidth(lbMostRecentMsg->sizePolicy().hasHeightForWidth());
        lbMostRecentMsg->setSizePolicy(sizePolicy);
        lbMostRecentMsg->setMinimumSize(QSize(130, 22));
        lbMostRecentMsg->setMaximumSize(QSize(130, 22));
        lbMostRecentMsg->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, lbMostRecentMsg);

        lbStateIcon = new QLabel(widget);
        lbStateIcon->setObjectName(QStringLiteral("lbStateIcon"));
        sizePolicy.setHeightForWidth(lbStateIcon->sizePolicy().hasHeightForWidth());
        lbStateIcon->setSizePolicy(sizePolicy);
        lbStateIcon->setMinimumSize(QSize(45, 22));
        lbStateIcon->setMaximumSize(QSize(45, 22));
        lbStateIcon->setFont(font1);

        formLayout->setWidget(1, QFormLayout::FieldRole, lbStateIcon);


        horizontalLayout->addWidget(widget);


        horizontalLayout_2->addWidget(widget_2);


        retranslateUi(ChatListItem);

        QMetaObject::connectSlotsByName(ChatListItem);
    } // setupUi

    void retranslateUi(QWidget *ChatListItem)
    {
        ChatListItem->setWindowTitle(QApplication::translate("ChatListItem", "Form", Q_NULLPTR));
        lbHeadIcon->setText(QApplication::translate("ChatListItem", "head", Q_NULLPTR));
        lbUserName->setText(QApplication::translate("ChatListItem", "TextLabel", Q_NULLPTR));
        lbDate->setText(QApplication::translate("ChatListItem", "TextLabel", Q_NULLPTR));
        lbMostRecentMsg->setText(QApplication::translate("ChatListItem", "TextLabel", Q_NULLPTR));
        lbStateIcon->setText(QApplication::translate("ChatListItem", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ChatListItem: public Ui_ChatListItem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATLISTITEM_H
