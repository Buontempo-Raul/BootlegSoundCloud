#ifndef SIGNUP_H
#define SIGNUP_H
#include <QDialog>
#include"mainwindow.h"

namespace Ui {
class Signup;
}

class Signup : public QDialog
{
    Q_OBJECT

public:
    explicit Signup(QWidget *parent = nullptr);
    ~Signup();

private slots:
    void on_pushButton_2_clicked();
    void on_SignUpButton_clicked();

private:
    Ui::Signup *ui;
};

#endif // SIGNUP_H
