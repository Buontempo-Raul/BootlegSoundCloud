#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"signup.h"
#include<QPixmap>
#include <QTcpSocket>
#include "cexceptie.h"
#include"menu.h"
#include"requestlogin.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->SignUp, SIGNAL(linkActivated(QString)), this, SLOT(openSignUpWindow()));
    ui->lineEdit->setPlaceholderText("Ex:ursu112");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::openSignUpWindow()
{
    this->close();
    Signup *signup = new Signup(this);
    signup->setModal(true);
    signup->show();
}


void MainWindow::on_pushButton_clicked()
{
    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if(username.isEmpty() || password.isEmpty()) {
        cexceptie exc;
        exc.LoginError();
        return;
    }

    currentuser=new normaluser(username,password);

    if(currentuser->sendCredentials()){
        QMessageBox::information(this, "LogIn", "Username and password is correct");
        this->hide();

        menu Menu(nullptr);
        Menu.setModal(true);
        Menu.show();
        Menu.exec();
    }
    else{
        cexceptie exc;
        exc.LoginError();
    }
}


