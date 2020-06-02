/********************************************************************************
** Form generated from reading UI file 'chatermessagebox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHATERMESSAGEBOX_H
#define UI_CHATERMESSAGEBOX_H

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

class Ui_chaterMessageBox
{
public:
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lbMessageIcon;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbMessageText;
    QSpacerItem *verticalSpacer;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnMessage;

    void setupUi(QWidget *chaterMessageBox)
    {
        if (chaterMessageBox->objectName().isEmpty())
            chaterMessageBox->setObjectName(QStringLiteral("chaterMessageBox"));
        chaterMessageBox->resize(220, 175);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(chaterMessageBox->sizePolicy().hasHeightForWidth());
        chaterMessageBox->setSizePolicy(sizePolicy);
        chaterMessageBox->setLayoutDirection(Qt::LeftToRight);
        verticalLayout_2 = new QVBoxLayout(chaterMessageBox);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(chaterMessageBox);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        verticalLayout = new QVBoxLayout(widget_4);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_3 = new QWidget(widget_4);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lbMessageIcon = new QLabel(widget_3);
        lbMessageIcon->setObjectName(QStringLiteral("lbMessageIcon"));
        lbMessageIcon->setMinimumSize(QSize(60, 60));
        lbMessageIcon->setMaximumSize(QSize(60, 60));

        horizontalLayout_3->addWidget(lbMessageIcon);


        verticalLayout->addWidget(widget_3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_2 = new QWidget(widget_4);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lbMessageText = new QLabel(widget_2);
        lbMessageText->setObjectName(QStringLiteral("lbMessageText"));
        sizePolicy.setHeightForWidth(lbMessageText->sizePolicy().hasHeightForWidth());
        lbMessageText->setSizePolicy(sizePolicy);
        lbMessageText->setMinimumSize(QSize(180, 0));

        horizontalLayout_2->addWidget(lbMessageText);


        verticalLayout->addWidget(widget_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        widget = new QWidget(widget_4);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, 9, 9, 9);
        btnMessage = new QPushButton(widget);
        btnMessage->setObjectName(QStringLiteral("btnMessage"));
        btnMessage->setMinimumSize(QSize(100, 30));
        btnMessage->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(btnMessage);


        verticalLayout->addWidget(widget);


        verticalLayout_2->addWidget(widget_4);


        retranslateUi(chaterMessageBox);

        QMetaObject::connectSlotsByName(chaterMessageBox);
    } // setupUi

    void retranslateUi(QWidget *chaterMessageBox)
    {
        chaterMessageBox->setWindowTitle(QApplication::translate("chaterMessageBox", "Form", Q_NULLPTR));
        lbMessageIcon->setText(QApplication::translate("chaterMessageBox", "TextLabel", Q_NULLPTR));
        lbMessageText->setText(QApplication::translate("chaterMessageBox", "TextLabel", Q_NULLPTR));
        btnMessage->setText(QApplication::translate("chaterMessageBox", "PushButton", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class chaterMessageBox: public Ui_chaterMessageBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHATERMESSAGEBOX_H
