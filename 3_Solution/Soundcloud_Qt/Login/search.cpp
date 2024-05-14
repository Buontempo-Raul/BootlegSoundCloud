#include "search.h"
#include "ui_search.h"
#include"menu.h"

Search::Search(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Search)
{
    ui->setupUi(this);
}

Search::~Search()
{
    delete ui;
}

void Search::on_pushButton_clicked()
{
    this->close();
    menu *Menu=new menu;
    Menu->show();
}

