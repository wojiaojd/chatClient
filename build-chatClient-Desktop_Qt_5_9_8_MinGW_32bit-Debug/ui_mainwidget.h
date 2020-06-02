/********************************************************************************
** Form generated from reading UI file 'mainwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWIDGET_H
#define UI_MAINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_12;
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QToolButton *btnUsrMsg;
    QToolButton *btnChatWidget;
    QToolButton *btnUserList;
    QToolButton *btnCollection;
    QToolButton *btnFile;
    QToolButton *btnLook;
    QSpacerItem *verticalSpacer;
    QToolButton *btnTinyProgram;
    QToolButton *btnPhone;
    QToolButton *btnMore;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnSearch;
    QLineEdit *ledtSearch;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *btnNewChat;
    QWidget *widget_5;
    QScrollArea *scroAreaLeft;
    QWidget *scrollAreaWidgetContents;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnTop;
    QPushButton *btnMinSize;
    QPushButton *btnMaxSize;
    QPushButton *btnClose;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnChatMsg;
    QWidget *widget_8;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scroAreaRight;
    QWidget *scrollAreaWidgetContents_2;
    QWidget *widget_9;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget_10;
    QHBoxLayout *horizontalLayout_5;
    QToolButton *btnEmoji;
    QToolButton *btnSendFile;
    QToolButton *btnCut;
    QToolButton *btnChatRecord;
    QSpacerItem *horizontalSpacer_4;
    QPlainTextEdit *tedtInputArea;
    QWidget *widget_11;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *btnSend;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->resize(722, 570);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWidget->sizePolicy().hasHeightForWidth());
        mainWidget->setSizePolicy(sizePolicy);
        verticalLayout_8 = new QVBoxLayout(mainWidget);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        widget_12 = new QWidget(mainWidget);
        widget_12->setObjectName(QStringLiteral("widget_12"));
        horizontalLayout_2 = new QHBoxLayout(widget_12);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(widget_12);
        widget->setObjectName(QStringLiteral("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(60, 0));
        widget->setMaximumSize(QSize(60, 16777215));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        btnUsrMsg = new QToolButton(widget);
        btnUsrMsg->setObjectName(QStringLiteral("btnUsrMsg"));
        btnUsrMsg->setMinimumSize(QSize(40, 40));
        btnUsrMsg->setMaximumSize(QSize(40, 40));

        verticalLayout->addWidget(btnUsrMsg);

        btnChatWidget = new QToolButton(widget);
        btnChatWidget->setObjectName(QStringLiteral("btnChatWidget"));
        btnChatWidget->setMinimumSize(QSize(40, 40));
        btnChatWidget->setMaximumSize(QSize(40, 40));

        verticalLayout->addWidget(btnChatWidget);

        btnUserList = new QToolButton(widget);
        btnUserList->setObjectName(QStringLiteral("btnUserList"));
        btnUserList->setMinimumSize(QSize(40, 40));
        btnUserList->setMaximumSize(QSize(40, 40));

        verticalLayout->addWidget(btnUserList);

        btnCollection = new QToolButton(widget);
        btnCollection->setObjectName(QStringLiteral("btnCollection"));
        btnCollection->setMinimumSize(QSize(40, 40));
        btnCollection->setMaximumSize(QSize(40, 40));

        verticalLayout->addWidget(btnCollection);

        btnFile = new QToolButton(widget);
        btnFile->setObjectName(QStringLiteral("btnFile"));
        btnFile->setMinimumSize(QSize(40, 40));
        btnFile->setMaximumSize(QSize(40, 40));

        verticalLayout->addWidget(btnFile);

        btnLook = new QToolButton(widget);
        btnLook->setObjectName(QStringLiteral("btnLook"));
        btnLook->setMinimumSize(QSize(40, 40));
        btnLook->setMaximumSize(QSize(40, 40));

        verticalLayout->addWidget(btnLook);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnTinyProgram = new QToolButton(widget);
        btnTinyProgram->setObjectName(QStringLiteral("btnTinyProgram"));
        btnTinyProgram->setMinimumSize(QSize(40, 40));
        btnTinyProgram->setMaximumSize(QSize(40, 40));

        verticalLayout->addWidget(btnTinyProgram);

        btnPhone = new QToolButton(widget);
        btnPhone->setObjectName(QStringLiteral("btnPhone"));
        btnPhone->setMinimumSize(QSize(40, 40));
        btnPhone->setMaximumSize(QSize(40, 40));

        verticalLayout->addWidget(btnPhone);

        btnMore = new QToolButton(widget);
        btnMore->setObjectName(QStringLiteral("btnMore"));
        btnMore->setMinimumSize(QSize(40, 40));
        btnMore->setMaximumSize(QSize(40, 40));

        verticalLayout->addWidget(btnMore);


        horizontalLayout_2->addWidget(widget);

        widget_2 = new QWidget(widget_12);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        widget_2->setMinimumSize(QSize(250, 0));
        widget_2->setMaximumSize(QSize(250, 16777215));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        sizePolicy.setHeightForWidth(widget_4->sizePolicy().hasHeightForWidth());
        widget_4->setSizePolicy(sizePolicy);
        widget_4->setMinimumSize(QSize(250, 60));
        widget_4->setMaximumSize(QSize(250, 60));
        horizontalLayout = new QHBoxLayout(widget_4);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(9, -1, 9, -1);
        btnSearch = new QPushButton(widget_4);
        btnSearch->setObjectName(QStringLiteral("btnSearch"));
        sizePolicy.setHeightForWidth(btnSearch->sizePolicy().hasHeightForWidth());
        btnSearch->setSizePolicy(sizePolicy);
        btnSearch->setMinimumSize(QSize(25, 25));
        btnSearch->setMaximumSize(QSize(25, 25));

        horizontalLayout->addWidget(btnSearch);

        ledtSearch = new QLineEdit(widget_4);
        ledtSearch->setObjectName(QStringLiteral("ledtSearch"));
        sizePolicy.setHeightForWidth(ledtSearch->sizePolicy().hasHeightForWidth());
        ledtSearch->setSizePolicy(sizePolicy);
        ledtSearch->setMinimumSize(QSize(170, 25));
        ledtSearch->setMaximumSize(QSize(170, 25));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        ledtSearch->setFont(font);

        horizontalLayout->addWidget(ledtSearch);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        btnNewChat = new QPushButton(widget_4);
        btnNewChat->setObjectName(QStringLiteral("btnNewChat"));
        sizePolicy.setHeightForWidth(btnNewChat->sizePolicy().hasHeightForWidth());
        btnNewChat->setSizePolicy(sizePolicy);
        btnNewChat->setMinimumSize(QSize(25, 25));
        btnNewChat->setMaximumSize(QSize(25, 25));

        horizontalLayout->addWidget(btnNewChat);


        verticalLayout_2->addWidget(widget_4);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(widget_5->sizePolicy().hasHeightForWidth());
        widget_5->setSizePolicy(sizePolicy2);
        widget_5->setMinimumSize(QSize(250, 0));
        widget_5->setMaximumSize(QSize(250, 16777215));
        scroAreaLeft = new QScrollArea(widget_5);
        scroAreaLeft->setObjectName(QStringLiteral("scroAreaLeft"));
        scroAreaLeft->setGeometry(QRect(0, 0, 250, 440));
        sizePolicy2.setHeightForWidth(scroAreaLeft->sizePolicy().hasHeightForWidth());
        scroAreaLeft->setSizePolicy(sizePolicy2);
        scroAreaLeft->setMinimumSize(QSize(250, 440));
        scroAreaLeft->setMaximumSize(QSize(250, 65535));
        scroAreaLeft->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 248, 438));
        scroAreaLeft->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(widget_5);


        horizontalLayout_2->addWidget(widget_2);

        widget_3 = new QWidget(widget_12);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMinimumSize(QSize(390, 500));
        verticalLayout_5 = new QVBoxLayout(widget_3);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_6 = new QWidget(widget_3);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(widget_6->sizePolicy().hasHeightForWidth());
        widget_6->setSizePolicy(sizePolicy3);
        widget_6->setMinimumSize(QSize(0, 26));
        widget_6->setMaximumSize(QSize(16777215, 26));
        horizontalLayout_3 = new QHBoxLayout(widget_6);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnTop = new QPushButton(widget_6);
        btnTop->setObjectName(QStringLiteral("btnTop"));
        sizePolicy.setHeightForWidth(btnTop->sizePolicy().hasHeightForWidth());
        btnTop->setSizePolicy(sizePolicy);
        btnTop->setMinimumSize(QSize(35, 26));
        btnTop->setMaximumSize(QSize(35, 26));

        horizontalLayout_3->addWidget(btnTop);

        btnMinSize = new QPushButton(widget_6);
        btnMinSize->setObjectName(QStringLiteral("btnMinSize"));
        sizePolicy.setHeightForWidth(btnMinSize->sizePolicy().hasHeightForWidth());
        btnMinSize->setSizePolicy(sizePolicy);
        btnMinSize->setMinimumSize(QSize(35, 26));
        btnMinSize->setMaximumSize(QSize(35, 26));

        horizontalLayout_3->addWidget(btnMinSize);

        btnMaxSize = new QPushButton(widget_6);
        btnMaxSize->setObjectName(QStringLiteral("btnMaxSize"));
        sizePolicy.setHeightForWidth(btnMaxSize->sizePolicy().hasHeightForWidth());
        btnMaxSize->setSizePolicy(sizePolicy);
        btnMaxSize->setMinimumSize(QSize(35, 26));
        btnMaxSize->setMaximumSize(QSize(35, 26));

        horizontalLayout_3->addWidget(btnMaxSize);

        btnClose = new QPushButton(widget_6);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        sizePolicy.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy);
        btnClose->setMinimumSize(QSize(35, 26));
        btnClose->setMaximumSize(QSize(35, 26));

        horizontalLayout_3->addWidget(btnClose);


        verticalLayout_5->addWidget(widget_6);

        widget_7 = new QWidget(widget_3);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        sizePolicy3.setHeightForWidth(widget_7->sizePolicy().hasHeightForWidth());
        widget_7->setSizePolicy(sizePolicy3);
        widget_7->setMinimumSize(QSize(0, 34));
        widget_7->setMaximumSize(QSize(16777215, 34));
        horizontalLayout_4 = new QHBoxLayout(widget_7);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(5, 0, 5, 0);
        horizontalSpacer_3 = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        label = new QLabel(widget_7);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        label->setFont(font1);

        horizontalLayout_4->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(296, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        btnChatMsg = new QPushButton(widget_7);
        btnChatMsg->setObjectName(QStringLiteral("btnChatMsg"));
        sizePolicy.setHeightForWidth(btnChatMsg->sizePolicy().hasHeightForWidth());
        btnChatMsg->setSizePolicy(sizePolicy);
        btnChatMsg->setMinimumSize(QSize(35, 35));
        btnChatMsg->setMaximumSize(QSize(35, 35));

        horizontalLayout_4->addWidget(btnChatMsg);


        verticalLayout_5->addWidget(widget_7);

        widget_8 = new QWidget(widget_3);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        verticalLayout_4 = new QVBoxLayout(widget_8);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scroAreaRight = new QScrollArea(widget_8);
        scroAreaRight->setObjectName(QStringLiteral("scroAreaRight"));
        scroAreaRight->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 410, 364));
        scroAreaRight->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(scroAreaRight);


        verticalLayout_5->addWidget(widget_8);

        widget_9 = new QWidget(widget_3);
        widget_9->setObjectName(QStringLiteral("widget_9"));
        sizePolicy3.setHeightForWidth(widget_9->sizePolicy().hasHeightForWidth());
        widget_9->setSizePolicy(sizePolicy3);
        widget_9->setMinimumSize(QSize(0, 144));
        widget_9->setMaximumSize(QSize(16777215, 144));
        verticalLayout_6 = new QVBoxLayout(widget_9);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(15, 0, 15, 1);
        widget_10 = new QWidget(widget_9);
        widget_10->setObjectName(QStringLiteral("widget_10"));
        horizontalLayout_5 = new QHBoxLayout(widget_10);
        horizontalLayout_5->setSpacing(3);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 4, 0, 4);
        btnEmoji = new QToolButton(widget_10);
        btnEmoji->setObjectName(QStringLiteral("btnEmoji"));
        btnEmoji->setMinimumSize(QSize(35, 35));
        btnEmoji->setMaximumSize(QSize(35, 35));

        horizontalLayout_5->addWidget(btnEmoji);

        btnSendFile = new QToolButton(widget_10);
        btnSendFile->setObjectName(QStringLiteral("btnSendFile"));
        btnSendFile->setMinimumSize(QSize(35, 35));
        btnSendFile->setMaximumSize(QSize(35, 35));

        horizontalLayout_5->addWidget(btnSendFile);

        btnCut = new QToolButton(widget_10);
        btnCut->setObjectName(QStringLiteral("btnCut"));
        btnCut->setMinimumSize(QSize(35, 35));
        btnCut->setMaximumSize(QSize(35, 35));

        horizontalLayout_5->addWidget(btnCut);

        btnChatRecord = new QToolButton(widget_10);
        btnChatRecord->setObjectName(QStringLiteral("btnChatRecord"));
        btnChatRecord->setMinimumSize(QSize(35, 35));
        btnChatRecord->setMaximumSize(QSize(35, 35));

        horizontalLayout_5->addWidget(btnChatRecord);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_4);


        verticalLayout_6->addWidget(widget_10);

        tedtInputArea = new QPlainTextEdit(widget_9);
        tedtInputArea->setObjectName(QStringLiteral("tedtInputArea"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(11);
        tedtInputArea->setFont(font2);

        verticalLayout_6->addWidget(tedtInputArea);

        widget_11 = new QWidget(widget_9);
        widget_11->setObjectName(QStringLiteral("widget_11"));
        horizontalLayout_6 = new QHBoxLayout(widget_11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 4, 0, 4);
        horizontalSpacer_5 = new QSpacerItem(298, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_5);

        btnSend = new QPushButton(widget_11);
        btnSend->setObjectName(QStringLiteral("btnSend"));
        sizePolicy.setHeightForWidth(btnSend->sizePolicy().hasHeightForWidth());
        btnSend->setSizePolicy(sizePolicy);
        btnSend->setMinimumSize(QSize(75, 25));
        btnSend->setMaximumSize(QSize(75, 25));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        btnSend->setFont(font3);

        horizontalLayout_6->addWidget(btnSend);


        verticalLayout_6->addWidget(widget_11);


        verticalLayout_5->addWidget(widget_9);


        horizontalLayout_2->addWidget(widget_3);


        verticalLayout_8->addWidget(widget_12);


        retranslateUi(mainWidget);

        QMetaObject::connectSlotsByName(mainWidget);
    } // setupUi

    void retranslateUi(QWidget *mainWidget)
    {
        mainWidget->setWindowTitle(QApplication::translate("mainWidget", "Form", Q_NULLPTR));
        btnUsrMsg->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnChatWidget->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnUserList->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnCollection->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnFile->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnLook->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnTinyProgram->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnPhone->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnMore->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnSearch->setText(QString());
        btnNewChat->setText(QString());
        btnTop->setText(QString());
        btnMinSize->setText(QString());
        btnMaxSize->setText(QString());
        btnClose->setText(QString());
        label->setText(QApplication::translate("mainWidget", "\346\234\250\344\272\272\344\271\213", Q_NULLPTR));
        btnChatMsg->setText(QString());
        btnEmoji->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnSendFile->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnCut->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnChatRecord->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnSend->setText(QApplication::translate("mainWidget", "\345\217\221\351\200\201(S)", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
