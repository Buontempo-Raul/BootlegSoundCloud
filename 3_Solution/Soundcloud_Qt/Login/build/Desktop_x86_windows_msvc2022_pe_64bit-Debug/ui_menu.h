/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu
{
public:
    QStackedWidget *stackedWidget;
    QWidget *stackedWidgetPage1;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QWidget *page_4;
    QWidget *page_5;
    QWidget *page;
    QWidget *page_2;
    QWidget *page_3;
    QLineEdit *lineEdit;
    QPushButton *searchBar;
    QListWidget *searchWidgetList;
    QLabel *label_2;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *MusicPlayer;
    QPushButton *playStop;
    QPushButton *next;
    QPushButton *back;
    QSlider *horizontalSlider;
    QSlider *volume;
    QPushButton *mute;

    void setupUi(QDialog *menu)
    {
        if (menu->objectName().isEmpty())
            menu->setObjectName(QString::fromUtf8("menu"));
        menu->resize(1112, 693);
        menu->setStyleSheet(QString::fromUtf8("background-color: rgb(71, 71, 71);\n"
""));
        stackedWidget = new QStackedWidget(menu);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(250, 30, 831, 551));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-radius:20px;"));
        stackedWidgetPage1 = new QWidget();
        stackedWidgetPage1->setObjectName(QString::fromUtf8("stackedWidgetPage1"));
        pushButton_4 = new QPushButton(stackedWidgetPage1);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 20, 83, 29));
        pushButton_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}"));
        pushButton_5 = new QPushButton(stackedWidgetPage1);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(160, 20, 83, 29));
        pushButton_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}"));
        pushButton_6 = new QPushButton(stackedWidgetPage1);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(290, 20, 83, 29));
        pushButton_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}\n"
""));
        stackedWidget->addWidget(stackedWidgetPage1);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        stackedWidget->addWidget(page_5);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        lineEdit = new QLineEdit(page_3);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 40, 371, 31));
        lineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"font-size: 15px;\n"
"border-radius: 25px;\n"
"background-color: transparent;\n"
"border: 2px transparent;\n"
"color: black;\n"
"}\n"
""));
        searchBar = new QPushButton(page_3);
        searchBar->setObjectName(QString::fromUtf8("searchBar"));
        searchBar->setGeometry(QRect(70, 38, 51, 41));
        searchBar->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/beg/search.png"), QSize(), QIcon::Normal, QIcon::Off);
        searchBar->setIcon(icon);
        searchWidgetList = new QListWidget(page_3);
        searchWidgetList->setObjectName(QString::fromUtf8("searchWidgetList"));
        searchWidgetList->setGeometry(QRect(60, 90, 461, 371));
        label_2 = new QLabel(page_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 30, 441, 51));
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"border-radius: 25px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}\n"
""));
        stackedWidget->addWidget(page_3);
        label_2->raise();
        lineEdit->raise();
        searchBar->raise();
        searchWidgetList->raise();
        label = new QLabel(menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 221, 71));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-radius:15px;"));
        scrollArea = new QScrollArea(menu);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 110, 221, 471));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 219, 469));
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/beg/playlist.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon1);
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(menu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 30, 91, 31));
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/beg/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon2);
        pushButton->setCheckable(true);
        pushButton_2 = new QPushButton(menu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 70, 111, 29));
        pushButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        pushButton_2->setIcon(icon);
        MusicPlayer = new QWidget(menu);
        MusicPlayer->setObjectName(QString::fromUtf8("MusicPlayer"));
        MusicPlayer->setGeometry(QRect(20, 590, 1061, 81));
        MusicPlayer->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-radius:15px;"));
        playStop = new QPushButton(MusicPlayer);
        playStop->setObjectName(QString::fromUtf8("playStop"));
        playStop->setGeometry(QRect(520, 10, 61, 31));
        playStop->setMaximumSize(QSize(61, 16777215));
        playStop->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/beg/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/beg/pause.png"), QSize(), QIcon::Normal, QIcon::On);
        playStop->setIcon(icon3);
        playStop->setIconSize(QSize(30, 30));
        playStop->setCheckable(true);
        playStop->setChecked(false);
        playStop->setAutoRepeat(true);
        next = new QPushButton(MusicPlayer);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(560, 10, 83, 29));
        next->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/beg/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        next->setIcon(icon4);
        next->setIconSize(QSize(20, 20));
        back = new QPushButton(MusicPlayer);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(450, 10, 83, 29));
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/beg/back.png"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon5);
        back->setIconSize(QSize(20, 20));
        horizontalSlider = new QSlider(MusicPlayer);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(310, 50, 481, 20));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {\n"
"    width: 0px; \n"
"    margin: -5px -5px; \n"
"    border: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    height: 5px; \n"
"    margin: 3px 0; /* Ajusteaz\304\203 marginile pentru a p\304\203stra o distan\310\233\304\203 */\n"
"    border-radius: 4px; /* Redu border-radius-ul pentru a p\304\203stra o distan\310\233\304\203 */\n"
"    background: transparent; \n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: grey; /* Culoarea indic\304\203rii progresului */\n"
"    border-radius: 4px; /* Redu border-radius-ul pentru a p\304\203stra o distan\310\233\304\203 */\n"
"    height: 4px; /* Ajusteaz\304\203 \303\256n\304\203l\310\233imea */\n"
"    margin: 5px 3px; /* Ajusteaz\304\203 marginile pentru a p\304\203stra o distan\310\233\304\203 */\n"
"}\n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        volume = new QSlider(MusicPlayer);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(920, 20, 121, 51));
        volume->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {\n"
"    width: 0px; \n"
"    margin: -5px -5px; \n"
"    border: none;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    height: 5px; \n"
"    margin: 3px 0; /* Ajusteaz\304\203 marginile pentru a p\304\203stra o distan\310\233\304\203 */\n"
"    border-radius: 4px; /* Redu border-radius-ul pentru a p\304\203stra o distan\310\233\304\203 */\n"
"    background: transparent; \n"
"    border: 2px solid black;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"    background: grey; /* Culoarea indic\304\203rii progresului */\n"
"    border-radius: 4px; /* Redu border-radius-ul pentru a p\304\203stra o distan\310\233\304\203 */\n"
"    height: 4px; /* Ajusteaz\304\203 \303\256n\304\203l\310\233imea */\n"
"    margin: 5px 3px; /* Ajusteaz\304\203 marginile pentru a p\304\203stra o distan\310\233\304\203 */\n"
"}\n"
""));
        volume->setOrientation(Qt::Horizontal);
        mute = new QPushButton(MusicPlayer);
        mute->setObjectName(QString::fromUtf8("mute"));
        mute->setGeometry(QRect(890, 30, 31, 29));
        mute->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/beg/volume.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QString::fromUtf8(":/beg/mute.png"), QSize(), QIcon::Normal, QIcon::On);
        mute->setIcon(icon6);
        mute->setIconSize(QSize(20, 20));
        mute->setCheckable(true);
        mute->setChecked(false);
        mute->setAutoRepeat(false);
        MusicPlayer->raise();
        scrollArea->raise();
        label->raise();
        stackedWidget->raise();
        pushButton->raise();
        pushButton_2->raise();

        retranslateUi(menu);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(menu);
    } // setupUi

    void retranslateUi(QDialog *menu)
    {
        menu->setWindowTitle(QCoreApplication::translate("menu", "Dialog", nullptr));
        pushButton_4->setText(QCoreApplication::translate("menu", "All", nullptr));
        pushButton_5->setText(QCoreApplication::translate("menu", "Music", nullptr));
        pushButton_6->setText(QCoreApplication::translate("menu", "Podcast", nullptr));
        searchBar->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("menu", "  Library", nullptr));
        pushButton->setText(QCoreApplication::translate("menu", "    Home", nullptr));
        pushButton_2->setText(QCoreApplication::translate("menu", "    Search", nullptr));
        playStop->setText(QString());
        next->setText(QString());
        back->setText(QString());
        mute->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
