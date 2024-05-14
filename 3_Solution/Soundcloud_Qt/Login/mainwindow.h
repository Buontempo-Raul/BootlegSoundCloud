#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"menu.h"
#include"tcpclient.h"
#include "normaluser.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
   // void button();
    void openSignUpWindow();
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    normaluser * currentuser;

};
#endif // MAINWINDOW_H
