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
    connect(ui->SignUpButton, SIGNAL(clicked()), this, SLOT(on_SignUpButton_clicked()));
}

Signup::~Signup()
{
    delete ui;
}

void Signup::on_pushButton_2_clicked()
{
    this->hide(); // Ascunde fereastra SignUp

    // Afișează fereastra MainWindow dacă este disponibilă
    QWidget *mainWindow = this->parentWidget();
    if (mainWindow) {
        mainWindow->show(); // Afișează fereastra MainWindow
    } else {
        // În cazul în care fereastra MainWindow nu este disponibilă, puteți crea una
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

    // Verificați dacă parola și confirmarea parolei sunt identice
    if (password != confirmPassword) {
        QMessageBox::warning(this, "Eroare", "Parola și confirmarea parolei nu corespund.");
        return; // Opriți înregistrarea dacă parolele nu corespund
    }


    requestSignup req(username,password,email); //seteaza datele de conectare

    if(req._request()){
        TCPClient::setUsername(username);
        QMessageBox::information(this,"SignIn","Congratulation! Enjoy your search!");
        this->hide();

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

