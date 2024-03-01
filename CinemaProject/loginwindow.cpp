#include "loginwindow.h"
#include "Users.h"
#include "ui_loginwindow.h"
#include "welcomewindow.h"
LoginWindow::LoginWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginWindow)
{
    ui->setupUi(this);
    ui->label_error->setVisible(false);


}

LoginWindow::~LoginWindow()
{
    delete ui;
}

void LoginWindow::setvalues(QString name){
    ui->lineEdit_name->setText(name);
}



void LoginWindow::on_pushButton_Login_clicked()
{

    QString enteredUsername = ui->lineEdit_name->text();
    QString enteredPassword = ui->lineEdit_password->text();

    int index = -1;
    for (int i = 0; i < usersCount; ++i) {
        if (usernames[i] == enteredUsername && passwords[i] == enteredPassword) {
            index = i;
            break;
        }
    }
    if (index != -1) {
        hide();
        WelcomeWindow *welcomeWindow = new WelcomeWindow(this);
        welcomeWindow->show();
    } else {
        ui->label_error->setVisible(true);
    }
}






void LoginWindow::on_pushButton_Register_clicked()
{
    hide();
    WelcomeWindow *welcomeWindow = new WelcomeWindow(this);
    welcomeWindow->show();
}

