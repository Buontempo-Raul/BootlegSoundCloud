/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Signup
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *SignUpButton;
    QPushButton *pushButton_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;

    void setupUi(QDialog *Signup)
    {
        if (Signup->objectName().isEmpty())
            Signup->setObjectName(QString::fromUtf8("Signup"));
        Signup->resize(1144, 712);
        label = new QLabel(Signup);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(590, 140, 111, 31));
        label->setStyleSheet(QString::fromUtf8("QLabel {\n"
"  color: black;\n"
"    font-size: 25px; /* Font size */\n"
"    font-family: Arial; /* Font family */\n"
"    font-weight: bold; /* Font weight */\n"
"\n"
"}"));
        label_2 = new QLabel(Signup);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(500, 230, 121, 20));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: black;\n"
"}"));
        label_3 = new QLabel(Signup);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(500, 290, 121, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: black;\n"
"}"));
        label_4 = new QLabel(Signup);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(500, 350, 121, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: black;\n"
"}"));
        label_5 = new QLabel(Signup);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(500, 410, 191, 31));
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 20px;\n"
"color: black;\n"
"}"));
        lineEdit = new QLineEdit(Signup);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(500, 260, 301, 28));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black\n"
"}"));
        lineEdit_2 = new QLineEdit(Signup);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(500, 320, 301, 28));
        lineEdit_2->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black\n"
"}"));
        lineEdit_3 = new QLineEdit(Signup);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(500, 380, 301, 28));
        lineEdit_3->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black\n"
"}"));
        lineEdit_3->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        lineEdit_4 = new QLineEdit(Signup);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(500, 440, 301, 28));
        lineEdit_4->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black\n"
"}"));
        lineEdit_4->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        SignUpButton = new QPushButton(Signup);
        SignUpButton->setObjectName(QString::fromUtf8("SignUpButton"));
        SignUpButton->setGeometry(QRect(510, 490, 83, 29));
        SignUpButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color:green;\n"
"border-color:green\n"
"}"));
        pushButton_2 = new QPushButton(Signup);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(630, 490, 83, 29));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        label_6 = new QLabel(Signup);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(550, 180, 281, 20));
        label_7 = new QLabel(Signup);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(0, -10, 391, 721));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/beg/b3.jpeg")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(Signup);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 130, 361, 281));
        label_8->setPixmap(QPixmap(QString::fromUtf8(":/beg/Logo.png")));
        label_8->setScaledContents(true);
        label_9 = new QLabel(Signup);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(100, 290, 221, 20));
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 17px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"font-weight: bold;\n"
"color: white;\n"
"}"));
        label_10 = new QLabel(Signup);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(70, 470, 261, 20));
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        label_11 = new QLabel(Signup);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(110, 490, 191, 20));
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        label_12 = new QLabel(Signup);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(70, 510, 311, 20));
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        label_13 = new QLabel(Signup);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(110, 530, 191, 20));
        label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        label_14 = new QLabel(Signup);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(60, 550, 331, 20));
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        label_15 = new QLabel(Signup);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(120, 570, 151, 20));
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"background-color: transparent;\n"
"font-family: Arial;\n"
"color: white;\n"
"}"));
        label_7->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        lineEdit->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        lineEdit_4->raise();
        SignUpButton->raise();
        pushButton_2->raise();
        label_6->raise();
        label_8->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_12->raise();
        label_13->raise();
        label_14->raise();
        label_15->raise();

        retranslateUi(Signup);

        QMetaObject::connectSlotsByName(Signup);
    } // setupUi

    void retranslateUi(QDialog *Signup)
    {
        Signup->setWindowTitle(QCoreApplication::translate("Signup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Signup", "Sign Up", nullptr));
        label_2->setText(QCoreApplication::translate("Signup", "E-mail", nullptr));
        label_3->setText(QCoreApplication::translate("Signup", "Username", nullptr));
        label_4->setText(QCoreApplication::translate("Signup", "Password", nullptr));
        label_5->setText(QCoreApplication::translate("Signup", "Confirm password", nullptr));
        SignUpButton->setText(QCoreApplication::translate("Signup", "Sign Up", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Signup", "Back", nullptr));
        label_6->setText(QCoreApplication::translate("Signup", "Enter your sign up details below.", nullptr));
        label_7->setText(QString());
        label_8->setText(QString());
        label_9->setText(QCoreApplication::translate("Signup", "Your music, your world.", nullptr));
        label_10->setText(QCoreApplication::translate("Signup", "Join millions of artists and fans sharing", nullptr));
        label_11->setText(QCoreApplication::translate("Signup", " their music on SoundCloud.", nullptr));
        label_12->setText(QCoreApplication::translate("Signup", "Discover new songs, create playlists and", nullptr));
        label_13->setText(QCoreApplication::translate("Signup", "share your own creations. ", nullptr));
        label_14->setText(QCoreApplication::translate("Signup", "Express yourself through music and connect ", nullptr));
        label_15->setText(QCoreApplication::translate("Signup", "with a world of sound.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Signup: public Ui_Signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
