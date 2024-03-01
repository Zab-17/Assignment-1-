/********************************************************************************
** Form generated from reading UI file 'registerwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERWINDOW_H
#define UI_REGISTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_RegisterWindow
{
public:
    QLabel *label_name;
    QLabel *label_Password;
    QLabel *label_ReTypePassword;
    QLineEdit *lineEdit_name;
    QLineEdit *lineEdit_Password;
    QLineEdit *lineEdit_RetypePasssword;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLabel *label_Month;
    QLabel *label_Day;
    QLabel *label_Year;
    QGroupBox *groupBox_Gender;
    QRadioButton *radioButton_Female;
    QRadioButton *radioButton_Male;
    QGroupBox *groupBox_AccountType;
    QRadioButton *radioButton_User;
    QRadioButton *radioButton_Admin;
    QGroupBox *groupBox_Genre;
    QCheckBox *checkBox_Action;
    QCheckBox *checkBox_Drama;
    QCheckBox *checkBox_Comedy;
    QCheckBox *checkBox_Horror;
    QCheckBox *checkBox_Romance;
    QCheckBox *checkBox_other;

    void setupUi(QDialog *RegisterWindow)
    {
        if (RegisterWindow->objectName().isEmpty())
            RegisterWindow->setObjectName("RegisterWindow");
        RegisterWindow->resize(500, 464);
        label_name = new QLabel(RegisterWindow);
        label_name->setObjectName("label_name");
        label_name->setGeometry(QRect(20, 30, 58, 16));
        label_Password = new QLabel(RegisterWindow);
        label_Password->setObjectName("label_Password");
        label_Password->setGeometry(QRect(20, 70, 58, 16));
        label_ReTypePassword = new QLabel(RegisterWindow);
        label_ReTypePassword->setObjectName("label_ReTypePassword");
        label_ReTypePassword->setGeometry(QRect(10, 100, 111, 21));
        lineEdit_name = new QLineEdit(RegisterWindow);
        lineEdit_name->setObjectName("lineEdit_name");
        lineEdit_name->setGeometry(QRect(110, 30, 113, 21));
        lineEdit_Password = new QLineEdit(RegisterWindow);
        lineEdit_Password->setObjectName("lineEdit_Password");
        lineEdit_Password->setGeometry(QRect(100, 70, 113, 21));
        lineEdit_RetypePasssword = new QLineEdit(RegisterWindow);
        lineEdit_RetypePasssword->setObjectName("lineEdit_RetypePasssword");
        lineEdit_RetypePasssword->setGeometry(QRect(130, 100, 113, 21));
        comboBox = new QComboBox(RegisterWindow);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(10, 170, 103, 32));
        comboBox_2 = new QComboBox(RegisterWindow);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(110, 170, 103, 32));
        comboBox_3 = new QComboBox(RegisterWindow);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(220, 170, 103, 32));
        label_Month = new QLabel(RegisterWindow);
        label_Month->setObjectName("label_Month");
        label_Month->setGeometry(QRect(20, 150, 58, 16));
        label_Day = new QLabel(RegisterWindow);
        label_Day->setObjectName("label_Day");
        label_Day->setGeometry(QRect(120, 150, 58, 16));
        label_Year = new QLabel(RegisterWindow);
        label_Year->setObjectName("label_Year");
        label_Year->setGeometry(QRect(250, 150, 58, 16));
        groupBox_Gender = new QGroupBox(RegisterWindow);
        groupBox_Gender->setObjectName("groupBox_Gender");
        groupBox_Gender->setGeometry(QRect(10, 230, 91, 81));
        radioButton_Female = new QRadioButton(groupBox_Gender);
        radioButton_Female->setObjectName("radioButton_Female");
        radioButton_Female->setGeometry(QRect(10, 30, 101, 21));
        radioButton_Male = new QRadioButton(groupBox_Gender);
        radioButton_Male->setObjectName("radioButton_Male");
        radioButton_Male->setGeometry(QRect(10, 50, 101, 21));
        groupBox_AccountType = new QGroupBox(RegisterWindow);
        groupBox_AccountType->setObjectName("groupBox_AccountType");
        groupBox_AccountType->setGeometry(QRect(180, 230, 91, 81));
        groupBox_AccountType->setMouseTracking(false);
        groupBox_AccountType->setAcceptDrops(false);
        groupBox_AccountType->setFlat(false);
        groupBox_AccountType->setCheckable(false);
        radioButton_User = new QRadioButton(groupBox_AccountType);
        radioButton_User->setObjectName("radioButton_User");
        radioButton_User->setGeometry(QRect(0, 20, 99, 20));
        radioButton_User->setAutoFillBackground(false);
        radioButton_Admin = new QRadioButton(groupBox_AccountType);
        radioButton_Admin->setObjectName("radioButton_Admin");
        radioButton_Admin->setGeometry(QRect(0, 50, 99, 21));
        groupBox_Genre = new QGroupBox(RegisterWindow);
        groupBox_Genre->setObjectName("groupBox_Genre");
        groupBox_Genre->setGeometry(QRect(0, 320, 171, 131));
        checkBox_Action = new QCheckBox(groupBox_Genre);
        checkBox_Action->setObjectName("checkBox_Action");
        checkBox_Action->setGeometry(QRect(0, 40, 85, 20));
        checkBox_Drama = new QCheckBox(groupBox_Genre);
        checkBox_Drama->setObjectName("checkBox_Drama");
        checkBox_Drama->setGeometry(QRect(90, 40, 85, 20));
        checkBox_Comedy = new QCheckBox(groupBox_Genre);
        checkBox_Comedy->setObjectName("checkBox_Comedy");
        checkBox_Comedy->setGeometry(QRect(0, 70, 85, 20));
        checkBox_Horror = new QCheckBox(groupBox_Genre);
        checkBox_Horror->setObjectName("checkBox_Horror");
        checkBox_Horror->setGeometry(QRect(90, 70, 85, 20));
        checkBox_Romance = new QCheckBox(groupBox_Genre);
        checkBox_Romance->setObjectName("checkBox_Romance");
        checkBox_Romance->setGeometry(QRect(0, 100, 85, 20));
        checkBox_other = new QCheckBox(groupBox_Genre);
        checkBox_other->setObjectName("checkBox_other");
        checkBox_other->setGeometry(QRect(90, 100, 85, 20));

        retranslateUi(RegisterWindow);

        QMetaObject::connectSlotsByName(RegisterWindow);
    } // setupUi

    void retranslateUi(QDialog *RegisterWindow)
    {
        RegisterWindow->setWindowTitle(QCoreApplication::translate("RegisterWindow", "Dialog", nullptr));
        label_name->setText(QCoreApplication::translate("RegisterWindow", "Username ", nullptr));
        label_Password->setText(QCoreApplication::translate("RegisterWindow", "Password ", nullptr));
        label_ReTypePassword->setText(QCoreApplication::translate("RegisterWindow", "Re-type Password", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("RegisterWindow", "Jan ", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("RegisterWindow", "Feb", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("RegisterWindow", "Mar", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("RegisterWindow", "Apr", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("RegisterWindow", "May", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("RegisterWindow", "Jun", nullptr));
        comboBox->setItemText(6, QCoreApplication::translate("RegisterWindow", "Jul", nullptr));
        comboBox->setItemText(7, QCoreApplication::translate("RegisterWindow", "Aug", nullptr));
        comboBox->setItemText(8, QCoreApplication::translate("RegisterWindow", "Sep", nullptr));
        comboBox->setItemText(9, QCoreApplication::translate("RegisterWindow", "Oct", nullptr));
        comboBox->setItemText(10, QCoreApplication::translate("RegisterWindow", "Nov", nullptr));
        comboBox->setItemText(11, QCoreApplication::translate("RegisterWindow", "Dec", nullptr));

        comboBox_2->setItemText(0, QCoreApplication::translate("RegisterWindow", "1", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("RegisterWindow", "2", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("RegisterWindow", "3", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("RegisterWindow", "4", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("RegisterWindow", "5", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("RegisterWindow", "6", nullptr));
        comboBox_2->setItemText(6, QCoreApplication::translate("RegisterWindow", "7", nullptr));
        comboBox_2->setItemText(7, QCoreApplication::translate("RegisterWindow", "8", nullptr));
        comboBox_2->setItemText(8, QCoreApplication::translate("RegisterWindow", "9", nullptr));
        comboBox_2->setItemText(9, QCoreApplication::translate("RegisterWindow", "10", nullptr));
        comboBox_2->setItemText(10, QCoreApplication::translate("RegisterWindow", "11", nullptr));
        comboBox_2->setItemText(11, QCoreApplication::translate("RegisterWindow", "12", nullptr));
        comboBox_2->setItemText(12, QCoreApplication::translate("RegisterWindow", "13", nullptr));
        comboBox_2->setItemText(13, QCoreApplication::translate("RegisterWindow", "14", nullptr));
        comboBox_2->setItemText(14, QCoreApplication::translate("RegisterWindow", "15", nullptr));
        comboBox_2->setItemText(15, QCoreApplication::translate("RegisterWindow", "16", nullptr));
        comboBox_2->setItemText(16, QCoreApplication::translate("RegisterWindow", "17", nullptr));
        comboBox_2->setItemText(17, QCoreApplication::translate("RegisterWindow", "18", nullptr));
        comboBox_2->setItemText(18, QCoreApplication::translate("RegisterWindow", "19", nullptr));
        comboBox_2->setItemText(19, QCoreApplication::translate("RegisterWindow", "20", nullptr));
        comboBox_2->setItemText(20, QCoreApplication::translate("RegisterWindow", "21", nullptr));
        comboBox_2->setItemText(21, QCoreApplication::translate("RegisterWindow", "22", nullptr));
        comboBox_2->setItemText(22, QCoreApplication::translate("RegisterWindow", "23", nullptr));
        comboBox_2->setItemText(23, QCoreApplication::translate("RegisterWindow", "24", nullptr));
        comboBox_2->setItemText(24, QCoreApplication::translate("RegisterWindow", "25", nullptr));
        comboBox_2->setItemText(25, QCoreApplication::translate("RegisterWindow", "26", nullptr));
        comboBox_2->setItemText(26, QCoreApplication::translate("RegisterWindow", "27", nullptr));
        comboBox_2->setItemText(27, QCoreApplication::translate("RegisterWindow", "28", nullptr));
        comboBox_2->setItemText(28, QCoreApplication::translate("RegisterWindow", "29", nullptr));
        comboBox_2->setItemText(29, QCoreApplication::translate("RegisterWindow", "30", nullptr));
        comboBox_2->setItemText(30, QCoreApplication::translate("RegisterWindow", "31", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("RegisterWindow", "1990", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("RegisterWindow", "1991", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("RegisterWindow", "1992", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("RegisterWindow", "1993", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("RegisterWindow", "1994", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("RegisterWindow", "1995", nullptr));
        comboBox_3->setItemText(6, QCoreApplication::translate("RegisterWindow", "1996", nullptr));
        comboBox_3->setItemText(7, QCoreApplication::translate("RegisterWindow", "1997", nullptr));
        comboBox_3->setItemText(8, QCoreApplication::translate("RegisterWindow", "1998", nullptr));
        comboBox_3->setItemText(9, QCoreApplication::translate("RegisterWindow", "1999", nullptr));
        comboBox_3->setItemText(10, QCoreApplication::translate("RegisterWindow", "2000\n"
"", nullptr));
        comboBox_3->setItemText(11, QCoreApplication::translate("RegisterWindow", "2001", nullptr));
        comboBox_3->setItemText(12, QCoreApplication::translate("RegisterWindow", "2002", nullptr));
        comboBox_3->setItemText(13, QCoreApplication::translate("RegisterWindow", "2004", nullptr));
        comboBox_3->setItemText(14, QCoreApplication::translate("RegisterWindow", "2005", nullptr));
        comboBox_3->setItemText(15, QCoreApplication::translate("RegisterWindow", "2006", nullptr));
        comboBox_3->setItemText(16, QCoreApplication::translate("RegisterWindow", "2007", nullptr));
        comboBox_3->setItemText(17, QCoreApplication::translate("RegisterWindow", "2008", nullptr));
        comboBox_3->setItemText(18, QCoreApplication::translate("RegisterWindow", "2009", nullptr));
        comboBox_3->setItemText(19, QCoreApplication::translate("RegisterWindow", "2010", nullptr));
        comboBox_3->setItemText(20, QCoreApplication::translate("RegisterWindow", "2011", nullptr));
        comboBox_3->setItemText(21, QCoreApplication::translate("RegisterWindow", "2012", nullptr));
        comboBox_3->setItemText(22, QCoreApplication::translate("RegisterWindow", "2013", nullptr));
        comboBox_3->setItemText(23, QCoreApplication::translate("RegisterWindow", "2014", nullptr));
        comboBox_3->setItemText(24, QCoreApplication::translate("RegisterWindow", "2015", nullptr));
        comboBox_3->setItemText(25, QCoreApplication::translate("RegisterWindow", "2016", nullptr));
        comboBox_3->setItemText(26, QCoreApplication::translate("RegisterWindow", "2017", nullptr));
        comboBox_3->setItemText(27, QCoreApplication::translate("RegisterWindow", "2018", nullptr));
        comboBox_3->setItemText(28, QCoreApplication::translate("RegisterWindow", "2019", nullptr));
        comboBox_3->setItemText(29, QCoreApplication::translate("RegisterWindow", "2020", nullptr));
        comboBox_3->setItemText(30, QCoreApplication::translate("RegisterWindow", "2021", nullptr));
        comboBox_3->setItemText(31, QCoreApplication::translate("RegisterWindow", "2022", nullptr));
        comboBox_3->setItemText(32, QCoreApplication::translate("RegisterWindow", "2023", nullptr));
        comboBox_3->setItemText(33, QCoreApplication::translate("RegisterWindow", "2024", nullptr));
        comboBox_3->setItemText(34, QString());
        comboBox_3->setItemText(35, QString());

        label_Month->setText(QCoreApplication::translate("RegisterWindow", "Month", nullptr));
        label_Day->setText(QCoreApplication::translate("RegisterWindow", "Day", nullptr));
        label_Year->setText(QCoreApplication::translate("RegisterWindow", "Year", nullptr));
        groupBox_Gender->setTitle(QCoreApplication::translate("RegisterWindow", "Gender", nullptr));
        radioButton_Female->setText(QCoreApplication::translate("RegisterWindow", "Female", nullptr));
        radioButton_Male->setText(QCoreApplication::translate("RegisterWindow", "Male", nullptr));
        groupBox_AccountType->setTitle(QCoreApplication::translate("RegisterWindow", "AccountType", nullptr));
        radioButton_User->setText(QCoreApplication::translate("RegisterWindow", "User", nullptr));
        radioButton_Admin->setText(QCoreApplication::translate("RegisterWindow", "Admin", nullptr));
        groupBox_Genre->setTitle(QCoreApplication::translate("RegisterWindow", "Favourite Genre(s)", nullptr));
        checkBox_Action->setText(QCoreApplication::translate("RegisterWindow", "Action ", nullptr));
        checkBox_Drama->setText(QCoreApplication::translate("RegisterWindow", "Drama", nullptr));
        checkBox_Comedy->setText(QCoreApplication::translate("RegisterWindow", "Comedy", nullptr));
        checkBox_Horror->setText(QCoreApplication::translate("RegisterWindow", "Horror ", nullptr));
        checkBox_Romance->setText(QCoreApplication::translate("RegisterWindow", "Romance", nullptr));
        checkBox_other->setText(QCoreApplication::translate("RegisterWindow", "Other", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RegisterWindow: public Ui_RegisterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERWINDOW_H
