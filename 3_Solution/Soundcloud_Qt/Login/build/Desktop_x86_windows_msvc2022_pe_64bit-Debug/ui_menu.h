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
#include <QtWidgets/QGroupBox>
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
    QPushButton *pushButton_7;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QWidget *page_5;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QWidget *page;
    QWidget *page_2;
    QWidget *page_3;
    QLineEdit *searchLineEdit;
    QPushButton *searchBar;
    QListWidget *searchWidgetList;
    QLabel *label_2;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton_3;
    QGroupBox *groupBox;
    QPushButton *upload;
    QPushButton *pushButton_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *MusicPlayer;
    QPushButton *play;
    QPushButton *next;
    QPushButton *back;
    QSlider *horizontalSlider;
    QSlider *volume;
    QPushButton *mute;
    QLabel *name;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pause;
    QPushButton *pushButton_17;

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
        pushButton_7 = new QPushButton(page_4);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 20, 83, 29));
        pushButton_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}"));
        pushButton_12 = new QPushButton(page_4);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(160, 20, 83, 29));
        pushButton_12->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}"));
        pushButton_13 = new QPushButton(page_4);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(290, 20, 83, 29));
        pushButton_13->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}\n"
""));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        pushButton_14 = new QPushButton(page_5);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(30, 20, 83, 29));
        pushButton_14->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}"));
        pushButton_15 = new QPushButton(page_5);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(160, 20, 83, 29));
        pushButton_15->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}"));
        pushButton_16 = new QPushButton(page_5);
        pushButton_16->setObjectName(QString::fromUtf8("pushButton_16"));
        pushButton_16->setGeometry(QRect(290, 20, 83, 29));
        pushButton_16->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid black;\n"
"color: black;\n"
"}\n"
""));
        stackedWidget->addWidget(page_5);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        searchLineEdit = new QLineEdit(page_3);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));
        searchLineEdit->setGeometry(QRect(110, 40, 371, 31));
        searchLineEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        searchWidgetList->setGeometry(QRect(40, 90, 541, 371));
        searchWidgetList->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-radius:15px;"));
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
        searchWidgetList->raise();
        label_2->raise();
        searchLineEdit->raise();
        searchBar->raise();
        label = new QLabel(menu);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 221, 121));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"border-radius:15px;"));
        scrollArea = new QScrollArea(menu);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(20, 160, 221, 421));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
""));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 219, 419));
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
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 221, 421));
        groupBox->setTabletTracking(false);
        groupBox->setAutoFillBackground(false);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox::title {\n"
"     color: black;\n"
"     padding: 5px 10px; \n"
"     subcontrol-origin: margin;\n"
"      subcontrol-position: top left;\n"
"        }"));
        groupBox->setCheckable(false);
        upload = new QPushButton(groupBox);
        upload->setObjectName(QString::fromUtf8("upload"));
        upload->setGeometry(QRect(0, 30, 91, 29));
        upload->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/beg/upload.png"), QSize(), QIcon::Normal, QIcon::Off);
        upload->setIcon(icon2);
        pushButton_9 = new QPushButton(groupBox);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(0, 70, 141, 21));
        pushButton_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/beg/user (1).png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_9->setIcon(icon3);
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/beg/home.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon4);
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
        play = new QPushButton(MusicPlayer);
        play->setObjectName(QString::fromUtf8("play"));
        play->setGeometry(QRect(440, 10, 40, 40));
        play->setMaximumSize(QSize(40, 40));
        play->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"border-radius:20px;\n"
"background-color:transparent;\n"
"min-width:40px;\n"
"max-width:40px;\n"
"min-height:40px;\n"
"max-height:40px;\n"
"padding:0px\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:rgb(140,140,140);\n"
"\n"
"}"));
        play->setIconSize(QSize(30, 30));
        play->setCheckable(true);
        play->setChecked(false);
        play->setAutoRepeat(true);
        next = new QPushButton(MusicPlayer);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(560, 10, 40, 40));
        next->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"border-radius:20px;\n"
"background-color:transparent;\n"
"min-width:40px;\n"
"max-width:40px;\n"
"min-height:40px;\n"
"max-height:40px;\n"
"padding:0px\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:rgb(140,140,140);\n"
"\n"
"}"));
        next->setIconSize(QSize(20, 20));
        back = new QPushButton(MusicPlayer);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(380, 10, 40, 40));
        back->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"border-radius:20px;\n"
"background-color:transparent;\n"
"min-width:40px;\n"
"max-width:40px;\n"
"min-height:40px;\n"
"max-height:40px;\n"
"padding:0px\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:rgb(140,140,140);\n"
"\n"
"}"));
        back->setIconSize(QSize(20, 20));
        horizontalSlider = new QSlider(MusicPlayer);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(250, 50, 481, 20));
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider::handle:horizontal {\n"
"background:black;\n"
"    width: 20px; \n"
"    height:20px;\n"
"    margin: -7px -7px; \n"
"    border-radius:10px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    height: 10px; \n"
"width:460px;\n"
"    border-radius: 5px; /* Redu border-radius-ul pentru a p\304\203stra o distan\310\233\304\203 */\n"
"    background: transparent; \n"
"    border: 2px solid black;\n"
"}\n"
"\n"
""));
        horizontalSlider->setOrientation(Qt::Horizontal);
        volume = new QSlider(MusicPlayer);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setGeometry(QRect(920, 20, 121, 41));
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
        mute->setGeometry(QRect(870, 20, 40, 40));
        mute->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"border-radius:20px;\n"
"background-color:transparent;\n"
"min-width:40px;\n"
"max-width:40px;\n"
"min-height:40px;\n"
"max-height:40px;\n"
"padding:0px\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:rgb(140,140,140);\n"
"\n"
"}"));
        mute->setIconSize(QSize(40, 40));
        mute->setCheckable(true);
        mute->setChecked(false);
        mute->setAutoRepeat(false);
        name = new QLabel(MusicPlayer);
        name->setObjectName(QString::fromUtf8("name"));
        name->setGeometry(QRect(20, 19, 141, 41));
        label_3 = new QLabel(MusicPlayer);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(172, 50, 71, 20));
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        label_4 = new QLabel(MusicPlayer);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(730, 50, 81, 20));
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        pause = new QPushButton(MusicPlayer);
        pause->setObjectName(QString::fromUtf8("pause"));
        pause->setGeometry(QRect(500, 10, 40, 40));
        pause->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border:none;\n"
"border-radius:20px;\n"
"background-color:transparent;\n"
"min-width:40px;\n"
"max-width:40px;\n"
"min-height:40px;\n"
"max-height:40px;\n"
"padding:0px\n"
"}\n"
"\n"
"QPushButton:Hover{\n"
"background-color:rgb(140,140,140);\n"
"\n"
"}"));
        pushButton_17 = new QPushButton(menu);
        pushButton_17->setObjectName(QString::fromUtf8("pushButton_17"));
        pushButton_17->setGeometry(QRect(30, 110, 101, 29));
        pushButton_17->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"font-size: 15px;\n"
"border-radius: 10px;\n"
"background-color: transparent;\n"
"border: 2px solid transparent;\n"
"color: black;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/beg/user-profile.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_17->setIcon(icon5);
        stackedWidget->raise();
        MusicPlayer->raise();
        scrollArea->raise();
        label->raise();
        pushButton->raise();
        pushButton_2->raise();
        pushButton_17->raise();

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
        pushButton_7->setText(QCoreApplication::translate("menu", "All", nullptr));
        pushButton_12->setText(QCoreApplication::translate("menu", "Music", nullptr));
        pushButton_13->setText(QCoreApplication::translate("menu", "Podcast", nullptr));
        pushButton_14->setText(QCoreApplication::translate("menu", "All", nullptr));
        pushButton_15->setText(QCoreApplication::translate("menu", "Music", nullptr));
        pushButton_16->setText(QCoreApplication::translate("menu", "Podcast", nullptr));
        searchBar->setText(QString());
        label_2->setText(QString());
        label->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("menu", "  Library", nullptr));
        groupBox->setTitle(QCoreApplication::translate("menu", "Settings", nullptr));
        upload->setText(QCoreApplication::translate("menu", "  Upload", nullptr));
        pushButton_9->setText(QCoreApplication::translate("menu", "   Delete account", nullptr));
        pushButton->setText(QCoreApplication::translate("menu", "    Home", nullptr));
        pushButton_2->setText(QCoreApplication::translate("menu", "    Search", nullptr));
        play->setText(QString());
        next->setText(QString());
        back->setText(QString());
        mute->setText(QString());
        name->setText(QString());
        label_3->setText(QCoreApplication::translate("menu", "00:00:00", nullptr));
        label_4->setText(QCoreApplication::translate("menu", "00:00:00", nullptr));
        pause->setText(QString());
        pushButton_17->setText(QCoreApplication::translate("menu", "    Settings", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu: public Ui_menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
