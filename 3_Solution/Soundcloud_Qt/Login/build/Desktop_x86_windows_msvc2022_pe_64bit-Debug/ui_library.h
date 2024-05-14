/********************************************************************************
** Form generated from reading UI file 'library.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LIBRARY_H
#define UI_LIBRARY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>

QT_BEGIN_NAMESPACE

class Ui_Library
{
public:

    void setupUi(QDialog *Library)
    {
        if (Library->objectName().isEmpty())
            Library->setObjectName(QString::fromUtf8("Library"));
        Library->resize(400, 300);

        retranslateUi(Library);

        QMetaObject::connectSlotsByName(Library);
    } // setupUi

    void retranslateUi(QDialog *Library)
    {
        Library->setWindowTitle(QCoreApplication::translate("Library", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Library: public Ui_Library {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LIBRARY_H
