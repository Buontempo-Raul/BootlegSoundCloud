#undef UNICODE
#define _CRT_SECURE_NO_WARNINGS
#define WIN32_LEAN_AND_MEAN

#pragma comment (lib, "Ws2_32.lib")
#pragma comment (lib, "Mswsock.lib")
#pragma comment (lib, "AdvApi32.lib")

#include <windows.h>
#include <winsock2.h>
#include <ws2tcpip.h>
#include <stdio.h>

#include "mainwindow.h"

#include <iostream>
#include <thread>
#include <chrono>

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>

#include <QMainWindow>

#include <QCoreApplication>

#include "Client.h"

bool online = false;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen splash(QPixmap("D:/Qt/Soundcloud_transparent.png"));
    splash.show();
    QTimer::singleShot(2000, &splash, &QSplashScreen::close);
    std::this_thread::sleep_for(std::chrono::seconds(2));

    WSADATA wsaData;
    int iResult;

    Client::connect_to_server();


    MainWindow w;
    w.show();

    return a.exec();
}
