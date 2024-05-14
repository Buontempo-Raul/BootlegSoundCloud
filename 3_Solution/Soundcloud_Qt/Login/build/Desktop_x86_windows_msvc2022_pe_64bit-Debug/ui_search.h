/********************************************************************************
** Form generated from reading UI file 'search.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_H
#define UI_SEARCH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Search
{
public:
    QWidget *widget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_3;
    QWidget *widget_2;

    void setupUi(QDialog *Search)
    {
        if (Search->objectName().isEmpty())
            Search->setObjectName(QString::fromUtf8("Search"));
        Search->resize(1099, 697);
        Search->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
""));
        widget = new QWidget(Search);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(20, 20, 221, 80));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(10, 10, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/beg/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setCheckable(true);
        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(10, 50, 91, 29));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/beg/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        scrollArea = new QScrollArea(Search);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 120, 221, 541));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 219, 539));
        pushButton_3 = new QPushButton(scrollAreaWidgetContents);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 10, 91, 29));
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/beg/library.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        scrollArea->setWidget(scrollAreaWidgetContents);
        widget_2 = new QWidget(Search);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(260, 20, 811, 641));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));

        retranslateUi(Search);

        QMetaObject::connectSlotsByName(Search);
    } // setupUi

    void retranslateUi(QDialog *Search)
    {
        Search->setWindowTitle(QCoreApplication::translate("Search", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("Search", "    Home", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Search", "   Search", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Search", "  Library", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Search: public Ui_Search {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_H
