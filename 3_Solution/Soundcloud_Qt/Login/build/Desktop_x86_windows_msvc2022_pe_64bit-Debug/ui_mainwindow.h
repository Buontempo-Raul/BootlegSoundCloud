/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton;
    QLabel *SignUp;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1073, 693);
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(490, 140, 311, 41));
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 25px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"color: black;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(490, 240, 101, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: black;\n"
"}"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(490, 310, 101, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: black;\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(490, 270, 331, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black\n"
"}"));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(490, 340, 331, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black\n"
"}"));
        lineEdit_2->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(490, 400, 141, 29));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: green;\n"
"border-color:green\n"
"}"));
        SignUp = new QLabel(centralwidget);
        SignUp->setObjectName(QString::fromUtf8("SignUp"));
        SignUp->setGeometry(QRect(650, 480, 63, 20));
        SignUp->setStyleSheet(QString::fromUtf8(""));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(540, 460, 361, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"}"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(490, 180, 211, 20));
        label_5->setStyleSheet(QString::fromUtf8("color: black"));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(-48, -1, 441, 711));
        label_6->setStyleSheet(QString::fromUtf8(""));
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/beg/b3.jpeg")));
        label_6->setScaledContents(true);
        label_6->setWordWrap(false);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, 110, 361, 311));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/beg/Logo.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 290, 221, 20));
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 17px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"color: white;\n"
"}"));
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(100, 490, 241, 21));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(60, 470, 281, 21));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(110, 510, 161, 20));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(160, 530, 63, 20));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        MainWindow->setCentralWidget(centralwidget);
        label_6->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        pushButton->raise();
        SignUp->raise();
        label_4->raise();
        label_5->raise();
        label_7->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Log into SoundCloud", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        SignUp->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><a href=\"Sign up\"><span style=\" color:#007af4;\">Sign up</span></a></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Don't have an account? Create one now!", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Enter your login details below.", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Your music, your world.", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "A powerful, yet easy-to-use", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Unlock your sound. Unleash your creativity.", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "application for managing", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "music.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
