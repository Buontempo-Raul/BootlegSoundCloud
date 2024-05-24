#include "signup.h"
#include "ui_signup.h"
#include<cexceptie.h>
#include"mainwindow.h"
#include"requestsignup.h"

Signup::Signup(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Signup)
{
    ui->setupUi(this);
    connect(ui->pushButton_2, SIGNAL(clicked()), this, SLOT(on_pushButton_2_clicked()));

    ui->lineEdit->setPlaceholderText("Ex:nume@email.com");
    ui->lineEdit_2->setPlaceholderText("Ex:username");
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_2_clicked()
{
    this->close();


    QWidget *mainWindow = this->parentWidget();
    if (mainWindow) {
        mainWindow->show();
    } else {

        MainWindow *main = new MainWindow();
        main->show();
    }

}

void Signup::on_SignUpButton_clicked()
{
    QString username = ui->lineEdit_2->text();
    QString email = ui->lineEdit->text();
    QString password = ui->lineEdit_3->text();
    QString confirmPassword = ui->lineEdit_4->text();


    if (password != confirmPassword) {
        QMessageBox::warning(this, "Eroare", "Parola și confirmarea parolei nu corespund.");
        return;
    }


    requestSignup req(username,password,email);

    if(req._request()){
        TCPClient::setUsername(username);
        QMessageBox::information(this,"SignIn","Congratulation! Enjoy the music!");
        this->close();
        QWidget *mainWindow = this->parentWidget();
        mainWindow->close();
        menu Menu(nullptr);
        Menu.setModal(true);
        Menu.show();
        Menu.exec();
    }
    else{
        cexceptie exc;
        exc.RegisterError();
    }

}

