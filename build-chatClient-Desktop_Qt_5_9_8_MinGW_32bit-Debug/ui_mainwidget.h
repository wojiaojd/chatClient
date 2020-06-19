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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainWidget
{
public:
    QHBoxLayout *horizontalLayout_9;
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
    QVBoxLayout *verticalLayout_3;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnTop;
    QPushButton *btnMinSize;
    QPushButton *btnMaxSize;
    QPushButton *btnClose;
    QStackedWidget *stackedWidget;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_10;
    QLabel *lbIcon;
    QSpacerItem *horizontalSpacer_11;
    QWidget *page;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget_13;
    QVBoxLayout *verticalLayout_5;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnChatMsg;
    QStackedWidget *stackWgtMsgList;
    QWidget *msgPage;
    QVBoxLayout *verticalLayout_4;
    QWidget *page_5;
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
    QWidget *page_2;
    QVBoxLayout *verticalLayout_8;
    QWidget *widget_14;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_15;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_8;
    QLineEdit *ledtNewFriend;
    QPushButton *btnSearchFriend;
    QSpacerItem *horizontalSpacer_9;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_11;
    QWidget *widget_16;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_17;
    QHBoxLayout *horizontalLayout_10;
    QWidget *widget_20;
    QVBoxLayout *verticalLayout_9;
    QLabel *lbUserName;
    QLabel *lbSaySth;
    QLabel *lbHeadIcon;
    QWidget *widget_18;
    QFormLayout *formLayout;
    QLabel *lbRemark;
    QLabel *lbRemarkContent;
    QLabel *lbRegion;
    QLabel *lbRegionContent;
    QLabel *lbId;
    QLabel *lbIdContent;
    QLabel *lbFrom;
    QLabel *lbFromContent;
    QWidget *widget_19;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *btnSendMsg;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *mainWidget)
    {
        if (mainWidget->objectName().isEmpty())
            mainWidget->setObjectName(QStringLiteral("mainWidget"));
        mainWidget->resize(719, 500);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainWidget->sizePolicy().hasHeightForWidth());
        mainWidget->setSizePolicy(sizePolicy);
        horizontalLayout_9 = new QHBoxLayout(mainWidget);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
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
        btnUsrMsg->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnUsrMsg);

        btnChatWidget = new QToolButton(widget);
        btnChatWidget->setObjectName(QStringLiteral("btnChatWidget"));
        btnChatWidget->setMinimumSize(QSize(40, 40));
        btnChatWidget->setMaximumSize(QSize(40, 40));
        btnChatWidget->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnChatWidget);

        btnUserList = new QToolButton(widget);
        btnUserList->setObjectName(QStringLiteral("btnUserList"));
        btnUserList->setMinimumSize(QSize(40, 40));
        btnUserList->setMaximumSize(QSize(40, 40));
        btnUserList->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnUserList);

        btnCollection = new QToolButton(widget);
        btnCollection->setObjectName(QStringLiteral("btnCollection"));
        btnCollection->setMinimumSize(QSize(40, 40));
        btnCollection->setMaximumSize(QSize(40, 40));
        btnCollection->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnCollection);

        btnFile = new QToolButton(widget);
        btnFile->setObjectName(QStringLiteral("btnFile"));
        btnFile->setMinimumSize(QSize(40, 40));
        btnFile->setMaximumSize(QSize(40, 40));
        btnFile->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnFile);

        btnLook = new QToolButton(widget);
        btnLook->setObjectName(QStringLiteral("btnLook"));
        btnLook->setMinimumSize(QSize(40, 40));
        btnLook->setMaximumSize(QSize(40, 40));
        btnLook->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnLook);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        btnTinyProgram = new QToolButton(widget);
        btnTinyProgram->setObjectName(QStringLiteral("btnTinyProgram"));
        btnTinyProgram->setMinimumSize(QSize(40, 40));
        btnTinyProgram->setMaximumSize(QSize(40, 40));
        btnTinyProgram->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnTinyProgram);

        btnPhone = new QToolButton(widget);
        btnPhone->setObjectName(QStringLiteral("btnPhone"));
        btnPhone->setMinimumSize(QSize(40, 40));
        btnPhone->setMaximumSize(QSize(40, 40));
        btnPhone->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout->addWidget(btnPhone);

        btnMore = new QToolButton(widget);
        btnMore->setObjectName(QStringLiteral("btnMore"));
        btnMore->setMinimumSize(QSize(40, 40));
        btnMore->setMaximumSize(QSize(40, 40));
        btnMore->setCursor(QCursor(Qt::PointingHandCursor));

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
        verticalLayout_3 = new QVBoxLayout(widget_3);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
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


        verticalLayout_3->addWidget(widget_6);

        stackedWidget = new QStackedWidget(widget_3);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        horizontalLayout_12 = new QHBoxLayout(page_4);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_10);

        lbIcon = new QLabel(page_4);
        lbIcon->setObjectName(QStringLiteral("lbIcon"));
        lbIcon->setMinimumSize(QSize(150, 150));
        lbIcon->setMaximumSize(QSize(150, 150));

        horizontalLayout_12->addWidget(lbIcon);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        stackedWidget->addWidget(page_4);
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout_7 = new QVBoxLayout(page);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget_13 = new QWidget(page);
        widget_13->setObjectName(QStringLiteral("widget_13"));
        verticalLayout_5 = new QVBoxLayout(widget_13);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_7 = new QWidget(widget_13);
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

        stackWgtMsgList = new QStackedWidget(widget_13);
        stackWgtMsgList->setObjectName(QStringLiteral("stackWgtMsgList"));
        msgPage = new QWidget();
        msgPage->setObjectName(QStringLiteral("msgPage"));
        verticalLayout_4 = new QVBoxLayout(msgPage);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        stackWgtMsgList->addWidget(msgPage);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        stackWgtMsgList->addWidget(page_5);

        verticalLayout_5->addWidget(stackWgtMsgList);

        widget_9 = new QWidget(widget_13);
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


        verticalLayout_7->addWidget(widget_13);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_8 = new QVBoxLayout(page_2);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        widget_14 = new QWidget(page_2);
        widget_14->setObjectName(QStringLiteral("widget_14"));
        sizePolicy3.setHeightForWidth(widget_14->sizePolicy().hasHeightForWidth());
        widget_14->setSizePolicy(sizePolicy3);
        widget_14->setMinimumSize(QSize(0, 36));
        widget_14->setMaximumSize(QSize(16777215, 36));
        horizontalLayout_7 = new QHBoxLayout(widget_14);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(30, 0, -1, 0);
        label_2 = new QLabel(widget_14);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font4.setPointSize(14);
        label_2->setFont(font4);

        horizontalLayout_7->addWidget(label_2);

        horizontalSpacer_7 = new QSpacerItem(285, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);


        verticalLayout_8->addWidget(widget_14);

        widget_15 = new QWidget(page_2);
        widget_15->setObjectName(QStringLiteral("widget_15"));
        horizontalLayout_8 = new QHBoxLayout(widget_15);
        horizontalLayout_8->setSpacing(12);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 9, 0, 9);
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);

        ledtNewFriend = new QLineEdit(widget_15);
        ledtNewFriend->setObjectName(QStringLiteral("ledtNewFriend"));
        sizePolicy.setHeightForWidth(ledtNewFriend->sizePolicy().hasHeightForWidth());
        ledtNewFriend->setSizePolicy(sizePolicy);
        ledtNewFriend->setMinimumSize(QSize(160, 30));
        ledtNewFriend->setMaximumSize(QSize(160, 30));
        ledtNewFriend->setFont(font);

        horizontalLayout_8->addWidget(ledtNewFriend);

        btnSearchFriend = new QPushButton(widget_15);
        btnSearchFriend->setObjectName(QStringLiteral("btnSearchFriend"));
        sizePolicy.setHeightForWidth(btnSearchFriend->sizePolicy().hasHeightForWidth());
        btnSearchFriend->setSizePolicy(sizePolicy);
        btnSearchFriend->setMinimumSize(QSize(75, 30));
        btnSearchFriend->setMaximumSize(QSize(75, 30));
        btnSearchFriend->setFont(font2);

        horizontalLayout_8->addWidget(btnSearchFriend);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_9);


        verticalLayout_8->addWidget(widget_15);

        scrollArea = new QScrollArea(page_2);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName(QStringLiteral("scrollAreaWidgetContents_3"));
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 407, 388));
        scrollArea->setWidget(scrollAreaWidgetContents_3);

        verticalLayout_8->addWidget(scrollArea);

        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_11 = new QVBoxLayout(page_3);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        widget_16 = new QWidget(page_3);
        widget_16->setObjectName(QStringLiteral("widget_16"));
        widget_16->setFont(font3);
        verticalLayout_10 = new QVBoxLayout(widget_16);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_2);

        widget_17 = new QWidget(widget_16);
        widget_17->setObjectName(QStringLiteral("widget_17"));
        horizontalLayout_10 = new QHBoxLayout(widget_17);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        widget_20 = new QWidget(widget_17);
        widget_20->setObjectName(QStringLiteral("widget_20"));
        verticalLayout_9 = new QVBoxLayout(widget_20);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        lbUserName = new QLabel(widget_20);
        lbUserName->setObjectName(QStringLiteral("lbUserName"));

        verticalLayout_9->addWidget(lbUserName);

        lbSaySth = new QLabel(widget_20);
        lbSaySth->setObjectName(QStringLiteral("lbSaySth"));

        verticalLayout_9->addWidget(lbSaySth);


        horizontalLayout_10->addWidget(widget_20);

        lbHeadIcon = new QLabel(widget_17);
        lbHeadIcon->setObjectName(QStringLiteral("lbHeadIcon"));

        horizontalLayout_10->addWidget(lbHeadIcon);


        verticalLayout_10->addWidget(widget_17);

        widget_18 = new QWidget(widget_16);
        widget_18->setObjectName(QStringLiteral("widget_18"));
        sizePolicy.setHeightForWidth(widget_18->sizePolicy().hasHeightForWidth());
        widget_18->setSizePolicy(sizePolicy);
        widget_18->setFont(font);
        formLayout = new QFormLayout(widget_18);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(30);
        formLayout->setVerticalSpacing(10);
        lbRemark = new QLabel(widget_18);
        lbRemark->setObjectName(QStringLiteral("lbRemark"));
        sizePolicy.setHeightForWidth(lbRemark->sizePolicy().hasHeightForWidth());
        lbRemark->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, lbRemark);

        lbRemarkContent = new QLabel(widget_18);
        lbRemarkContent->setObjectName(QStringLiteral("lbRemarkContent"));
        sizePolicy.setHeightForWidth(lbRemarkContent->sizePolicy().hasHeightForWidth());
        lbRemarkContent->setSizePolicy(sizePolicy);
        lbRemarkContent->setMinimumSize(QSize(300, 0));
        lbRemarkContent->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(0, QFormLayout::FieldRole, lbRemarkContent);

        lbRegion = new QLabel(widget_18);
        lbRegion->setObjectName(QStringLiteral("lbRegion"));
        sizePolicy.setHeightForWidth(lbRegion->sizePolicy().hasHeightForWidth());
        lbRegion->setSizePolicy(sizePolicy);

        formLayout->setWidget(1, QFormLayout::LabelRole, lbRegion);

        lbRegionContent = new QLabel(widget_18);
        lbRegionContent->setObjectName(QStringLiteral("lbRegionContent"));
        sizePolicy.setHeightForWidth(lbRegionContent->sizePolicy().hasHeightForWidth());
        lbRegionContent->setSizePolicy(sizePolicy);
        lbRegionContent->setMinimumSize(QSize(300, 0));
        lbRegionContent->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(1, QFormLayout::FieldRole, lbRegionContent);

        lbId = new QLabel(widget_18);
        lbId->setObjectName(QStringLiteral("lbId"));
        sizePolicy.setHeightForWidth(lbId->sizePolicy().hasHeightForWidth());
        lbId->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::LabelRole, lbId);

        lbIdContent = new QLabel(widget_18);
        lbIdContent->setObjectName(QStringLiteral("lbIdContent"));
        sizePolicy.setHeightForWidth(lbIdContent->sizePolicy().hasHeightForWidth());
        lbIdContent->setSizePolicy(sizePolicy);
        lbIdContent->setMinimumSize(QSize(300, 0));
        lbIdContent->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(2, QFormLayout::FieldRole, lbIdContent);

        lbFrom = new QLabel(widget_18);
        lbFrom->setObjectName(QStringLiteral("lbFrom"));
        sizePolicy.setHeightForWidth(lbFrom->sizePolicy().hasHeightForWidth());
        lbFrom->setSizePolicy(sizePolicy);

        formLayout->setWidget(3, QFormLayout::LabelRole, lbFrom);

        lbFromContent = new QLabel(widget_18);
        lbFromContent->setObjectName(QStringLiteral("lbFromContent"));
        sizePolicy.setHeightForWidth(lbFromContent->sizePolicy().hasHeightForWidth());
        lbFromContent->setSizePolicy(sizePolicy);
        lbFromContent->setMinimumSize(QSize(300, 0));
        lbFromContent->setMaximumSize(QSize(300, 16777215));

        formLayout->setWidget(3, QFormLayout::FieldRole, lbFromContent);


        verticalLayout_10->addWidget(widget_18);

        widget_19 = new QWidget(widget_16);
        widget_19->setObjectName(QStringLiteral("widget_19"));
        horizontalLayout_11 = new QHBoxLayout(widget_19);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        btnSendMsg = new QPushButton(widget_19);
        btnSendMsg->setObjectName(QStringLiteral("btnSendMsg"));
        sizePolicy.setHeightForWidth(btnSendMsg->sizePolicy().hasHeightForWidth());
        btnSendMsg->setSizePolicy(sizePolicy);
        btnSendMsg->setMinimumSize(QSize(140, 35));
        btnSendMsg->setMaximumSize(QSize(140, 35));
        btnSendMsg->setFont(font2);

        horizontalLayout_11->addWidget(btnSendMsg);


        verticalLayout_10->addWidget(widget_19);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);


        verticalLayout_11->addWidget(widget_16);

        stackedWidget->addWidget(page_3);

        verticalLayout_3->addWidget(stackedWidget);


        horizontalLayout_2->addWidget(widget_3);


        horizontalLayout_9->addWidget(widget_12);


        retranslateUi(mainWidget);

        stackedWidget->setCurrentIndex(1);
        stackWgtMsgList->setCurrentIndex(0);


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
        lbIcon->setText(QString());
        label->setText(QApplication::translate("mainWidget", "\346\234\250\344\272\272\344\271\213", Q_NULLPTR));
        btnChatMsg->setText(QString());
        btnEmoji->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnSendFile->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnCut->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnChatRecord->setText(QApplication::translate("mainWidget", "...", Q_NULLPTR));
        btnSend->setText(QApplication::translate("mainWidget", "\345\217\221\351\200\201(S)", Q_NULLPTR));
        label_2->setText(QApplication::translate("mainWidget", "\346\226\260\347\232\204\346\234\213\345\217\213", Q_NULLPTR));
        btnSearchFriend->setText(QApplication::translate("mainWidget", "\346\237\245\346\211\276", Q_NULLPTR));
        lbUserName->setText(QApplication::translate("mainWidget", "UserName", Q_NULLPTR));
        lbSaySth->setText(QApplication::translate("mainWidget", "\350\257\264\347\202\271\345\225\245", Q_NULLPTR));
        lbHeadIcon->setText(QApplication::translate("mainWidget", "TextLabel", Q_NULLPTR));
        lbRemark->setText(QApplication::translate("mainWidget", "\345\244\207  \346\263\250", Q_NULLPTR));
        lbRemarkContent->setText(QApplication::translate("mainWidget", "\345\221\265\345\221\265", Q_NULLPTR));
        lbRegion->setText(QApplication::translate("mainWidget", "\345\234\260  \345\214\272", Q_NULLPTR));
        lbRegionContent->setText(QApplication::translate("mainWidget", "\344\270\255\345\233\275", Q_NULLPTR));
        lbId->setText(QApplication::translate("mainWidget", "  I  D", Q_NULLPTR));
        lbIdContent->setText(QApplication::translate("mainWidget", "wojiaojd", Q_NULLPTR));
        lbFrom->setText(QApplication::translate("mainWidget", "\346\235\245  \346\272\220", Q_NULLPTR));
        lbFromContent->setText(QApplication::translate("mainWidget", "\345\276\256\344\277\241\345\217\267\346\220\234\347\264\242", Q_NULLPTR));
        btnSendMsg->setText(QApplication::translate("mainWidget", "\345\217\221\346\266\210\346\201\257", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class mainWidget: public Ui_mainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWIDGET_H
