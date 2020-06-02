/********************************************************************************
** Form generated from reading UI file 'signupwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUPWIDGET_H
#define UI_SIGNUPWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_signupWidget
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
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *btnSignin;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer_4;
    QSpacerItem *horizontalSpacer_2;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *lbBack;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QLabel *lbAccout;
    QLabel *lbPassword;
    QLineEdit *ledtAccount;
    QLineEdit *ledtPassword;

    void setupUi(QWidget *signupWidget)
    {
        if (signupWidget->objectName().isEmpty())
            signupWidget->setObjectName(QStringLiteral("signupWidget"));
        signupWidget->resize(280, 400);
        verticalLayout = new QVBoxLayout(signupWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        wgtTitle = new QWidget(signupWidget);
        wgtTitle->setObjectName(QStringLiteral("wgtTitle"));
        horizontalLayout = new QHBoxLayout(wgtTitle);
        horizontalLayout->setSpacing(0);
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

        widget = new QWidget(signupWidget);
        widget->setObjectName(QStringLiteral("widget"));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btnSignin = new QPushButton(widget);
        btnSignin->setObjectName(QStringLiteral("btnSignin"));
        btnSignin->setMinimumSize(QSize(210, 40));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        btnSignin->setFont(font1);

        gridLayout->addWidget(btnSignin, 3, 1, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_3, 6, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_4, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 0, 1, 1);

        widget_5 = new QWidget(widget);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lbBack = new QLabel(widget_5);
        lbBack->setObjectName(QStringLiteral("lbBack"));
        sizePolicy.setHeightForWidth(lbBack->sizePolicy().hasHeightForWidth());
        lbBack->setSizePolicy(sizePolicy);
        lbBack->setFont(font1);

        horizontalLayout_5->addWidget(lbBack);


        gridLayout->addWidget(widget_5, 5, 0, 1, 3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 2, 1, 1, 1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy1);
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setHorizontalSpacing(0);
        formLayout->setContentsMargins(0, 0, 0, 0);
        lbAccout = new QLabel(widget_2);
        lbAccout->setObjectName(QStringLiteral("lbAccout"));
        lbAccout->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, lbAccout);

        lbPassword = new QLabel(widget_2);
        lbPassword->setObjectName(QStringLiteral("lbPassword"));
        lbPassword->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, lbPassword);

        ledtAccount = new QLineEdit(widget_2);
        ledtAccount->setObjectName(QStringLiteral("ledtAccount"));
        sizePolicy1.setHeightForWidth(ledtAccount->sizePolicy().hasHeightForWidth());
        ledtAccount->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        ledtAccount->setFont(font2);

        formLayout->setWidget(0, QFormLayout::FieldRole, ledtAccount);

        ledtPassword = new QLineEdit(widget_2);
        ledtPassword->setObjectName(QStringLiteral("ledtPassword"));
        sizePolicy1.setHeightForWidth(ledtPassword->sizePolicy().hasHeightForWidth());
        ledtPassword->setSizePolicy(sizePolicy1);
        ledtPassword->setFont(font2);
        ledtPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, ledtPassword);


        gridLayout->addWidget(widget_2, 1, 1, 1, 1);


        verticalLayout->addWidget(widget);


        retranslateUi(signupWidget);

        QMetaObject::connectSlotsByName(signupWidget);
    } // setupUi

    void retranslateUi(QWidget *signupWidget)
    {
        signupWidget->setWindowTitle(QApplication::translate("signupWidget", "Form", Q_NULLPTR));
        lbTitle->setText(QApplication::translate("signupWidget", "CHATER", Q_NULLPTR));
        btnConfig->setText(QString());
        btnClose->setText(QString());
        btnSignin->setText(QApplication::translate("signupWidget", "\347\231\273\345\275\225", Q_NULLPTR));
        lbBack->setText(QApplication::translate("signupWidget", "\350\277\224\345\233\236", Q_NULLPTR));
        lbAccout->setText(QApplication::translate("signupWidget", "\350\264\246  \345\217\267\357\274\232", Q_NULLPTR));
        lbPassword->setText(QApplication::translate("signupWidget", "\345\257\206  \347\240\201\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class signupWidget: public Ui_signupWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUPWIDGET_H
