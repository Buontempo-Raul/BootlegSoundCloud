#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QElapsedTimer>
#include "mainwindow.h"
#include"menu.h"
#include "tcpclient.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);


    QSplashScreen splash(QPixmap(R"(C:\Users\condu\Desktop\Qt\Login\Logo.png)")); // Using raw string literal
    splash.show();
    QElapsedTimer timer;
    timer.start();


    while (timer.elapsed() < 3000) {
        app.processEvents();
    }
    splash.close();

    QString id="172.20.10.13";
    TCPClient::getInstance().start(id,12345);


    MainWindow mainWindow;
    mainWindow.show();
    // menu Menu;
    // Menu.show();

    return app.exec();
}
