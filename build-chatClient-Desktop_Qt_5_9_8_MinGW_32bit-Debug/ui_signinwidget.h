/********************************************************************************
** Form generated from reading UI file 'signinwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNINWIDGET_H
#define UI_SIGNINWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signinWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *wgtTitle;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_6;
    QLabel *lbTitle;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnConfig;
    QPushButton *btnClose;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *btnHeadIcon;
    QSpacerItem *verticalSpacer_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *lbName;
    QSpacerItem *horizontalSpacer_3;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnSignin;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *verticalSpacer_3;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbChangeUsr;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *signinWidget)
    {
        if (signinWidget->objectName().isEmpty())
            signinWidget->setObjectName(QStringLiteral("signinWidget"));
        signinWidget->resize(280, 400);
        signinWidget->setStyleSheet(QStringLiteral(""));
        verticalLayout = new QVBoxLayout(signinWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wgtTitle = new QWidget(signinWidget);
        wgtTitle->setObjectName(QStringLiteral("wgtTitle"));
        horizontalLayout = new QHBoxLayout(wgtTitle);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_6 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        lbTitle = new QLabel(wgtTitle);
        lbTitle->setObjectName(QStringLiteral("lbTitle"));
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe \345\256\213\344\275\223 Std L"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferDefault);
        lbTitle->setFont(font);

        horizontalLayout->addWidget(lbTitle);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnConfig = new QPushButton(wgtTitle);
        btnConfig->setObjectName(QStringLiteral("btnConfig"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnConfig->sizePolicy().hasHeightForWidth());
        btnConfig->setSizePolicy(sizePolicy);
        btnConfig->setMinimumSize(QSize(35, 28));
        btnConfig->setMaximumSize(QSize(35, 28));

        horizontalLayout->addWidget(btnConfig);

        btnClose = new QPushButton(wgtTitle);
        btnClose->setObjectName(QStringLiteral("btnClose"));
        sizePolicy.setHeightForWidth(btnClose->sizePolicy().hasHeightForWidth());
        btnClose->setSizePolicy(sizePolicy);
        btnClose->setMinimumSize(QSize(35, 28));
        btnClose->setMaximumSize(QSize(35, 28));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addWidget(wgtTitle);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        widget_2 = new QWidget(signinWidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnHeadIcon = new QToolButton(widget_2);
        btnHeadIcon->setObjectName(QStringLiteral("btnHeadIcon"));
        btnHeadIcon->setMinimumSize(QSize(92, 92));
        btnHeadIcon->setMouseTracking(false);

        horizontalLayout_2->addWidget(btnHeadIcon);


        verticalLayout->addWidget(widget_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        widget_3 = new QWidget(signinWidget);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(103, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        lbName = new QLabel(widget_3);
        lbName->setObjectName(QStringLiteral("lbName"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(false);
        font1.setWeight(50);
        lbName->setFont(font1);

        horizontalLayout_3->addWidget(lbName);

        horizontalSpacer_3 = new QSpacerItem(102, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(signinWidget);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        btnSignin = new QPushButton(widget_4);
        btnSignin->setObjectName(QStringLiteral("btnSignin"));
        btnSignin->setMinimumSize(QSize(210, 40));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        btnSignin->setFont(font2);

        horizontalLayout_4->addWidget(btnSignin);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);


        verticalLayout->addWidget(widget_4);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        widget_5 = new QWidget(signinWidget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lbChangeUsr = new QLabel(widget_5);
        lbChangeUsr->setObjectName(QStringLiteral("lbChangeUsr"));
        sizePolicy.setHeightForWidth(lbChangeUsr->sizePolicy().hasHeightForWidth());
        lbChangeUsr->setSizePolicy(sizePolicy);
        lbChangeUsr->setFont(font2);
        lbChangeUsr->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_5->addWidget(lbChangeUsr);


        verticalLayout->addWidget(widget_5);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(signinWidget);

        QMetaObject::connectSlotsByName(signinWidget);
    } // setupUi

    void retranslateUi(QWidget *signinWidget)
    {
        signinWidget->setWindowTitle(QApplication::translate("signinWidget", "signinWidget", Q_NULLPTR));
        lbTitle->setText(QApplication::translate("signinWidget", "CHATER", Q_NULLPTR));
        btnConfig->setText(QString());
        btnClose->setText(QString());
        btnHeadIcon->setText(QApplication::translate("signinWidget", "...", Q_NULLPTR));
        lbName->setText(QApplication::translate("signinWidget", "\346\234\250\344\272\272\344\271\213", Q_NULLPTR));
        btnSignin->setText(QApplication::translate("signinWidget", "\347\231\273\345\275\225", Q_NULLPTR));
        lbChangeUsr->setText(QApplication::translate("signinWidget", "\345\210\207\346\215\242\350\264\246\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class signinWidget: public Ui_signinWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNINWIDGET_H
