#include "cexceptie.h"
#include "qapplication.h"

cexceptie::cexceptie()
{

}

void cexceptie::LoginError()
{
    QMessageBox::warning(0,"Oops","Error during login.");
}

void cexceptie::RegisterError()
{
    QMessageBox::warning(0,"Oops","Error during register.");
}

void cexceptie::WrongConfirmation()
{
    QMessageBox::warning(0,"Critical Error","You didn't write a good confirmaion for your password.");
}

void cexceptie::NotAbleToConnect()
{
    QMessageBox::critical(0,"Critical Error","There is no connection to the server");
}

void cexceptie::WaitedforToMuchTime()
{
    QMessageBox::critical(0,"Connection issue","The time for the server to respond has expired.");
}

void cexceptie::DisableConnection()
{
    QMessageBox::information(0,"End","The session was closed.");
}

void cexceptie::Wrong()
{
    QMessageBox::information(0,"Ups!","No results. Try again!");
}

void cexceptie::crashApp()
{
    QMessageBox::critical(0,"Server Error!","Please try again later!");
    QApplication::quit();
}
