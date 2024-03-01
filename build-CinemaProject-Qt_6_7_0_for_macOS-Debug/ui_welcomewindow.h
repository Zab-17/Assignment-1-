/********************************************************************************
** Form generated from reading UI file 'welcomewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WELCOMEWINDOW_H
#define UI_WELCOMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_WelcomeWindow
{
public:
    QLabel *label_Hello;
    QPushButton *pushButton_Logout;
    QLineEdit *lineEdit;
    QLabel *label_image;
    QLabel *label_Welcome;

    void setupUi(QDialog *WelcomeWindow)
    {
        if (WelcomeWindow->objectName().isEmpty())
            WelcomeWindow->setObjectName("WelcomeWindow");
        WelcomeWindow->resize(400, 300);
        label_Hello = new QLabel(WelcomeWindow);
        label_Hello->setObjectName("label_Hello");
        label_Hello->setGeometry(QRect(10, 10, 58, 16));
        pushButton_Logout = new QPushButton(WelcomeWindow);
        pushButton_Logout->setObjectName("pushButton_Logout");
        pushButton_Logout->setGeometry(QRect(140, 250, 100, 32));
        lineEdit = new QLineEdit(WelcomeWindow);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(60, 10, 113, 21));
        label_image = new QLabel(WelcomeWindow);
        label_image->setObjectName("label_image");
        label_image->setGeometry(QRect(60, 100, 311, 131));
        label_Welcome = new QLabel(WelcomeWindow);
        label_Welcome->setObjectName("label_Welcome");
        label_Welcome->setGeometry(QRect(160, 90, 71, 31));

        retranslateUi(WelcomeWindow);

        QMetaObject::connectSlotsByName(WelcomeWindow);
    } // setupUi

    void retranslateUi(QDialog *WelcomeWindow)
    {
        WelcomeWindow->setWindowTitle(QCoreApplication::translate("WelcomeWindow", "Dialog", nullptr));
        label_Hello->setText(QCoreApplication::translate("WelcomeWindow", "Hello", nullptr));
        pushButton_Logout->setText(QCoreApplication::translate("WelcomeWindow", "Logout ", nullptr));
        label_image->setText(QCoreApplication::translate("WelcomeWindow", "TextLabel", nullptr));
        label_Welcome->setText(QCoreApplication::translate("WelcomeWindow", "Welcome", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WelcomeWindow: public Ui_WelcomeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WELCOMEWINDOW_H
