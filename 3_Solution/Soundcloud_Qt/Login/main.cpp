#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QElapsedTimer> // Include the header for QElapsedTimer
#include "mainwindow.h"
#include"menu.h"
#include "tcpclient.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    // Create and show splash screen with transparent logo
    QSplashScreen splash(QPixmap(R"(C:\Users\condu\Desktop\Qt\Login\Logo.png)")); // Using raw string literal
    splash.show();

    // Ensure the application processes events during the delay
    QElapsedTimer timer;
    timer.start();

    // Delay until the desired time has passed
    while (timer.elapsed() < 3000) { // Adjust the time as needed
        app.processEvents();
    }

    // Close the splash screen
    splash.close();
  //  TCPClient::getInstance().start("localhost",12345);
    // menu Menu;
    // Menu.show();
    //Show login/sign-up window
    MainWindow mainWindow;
    mainWindow.show();

    return app.exec();
}
