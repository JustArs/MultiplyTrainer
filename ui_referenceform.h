/********************************************************************************
** Form generated from reading UI file 'referenceform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REFERENCEFORM_H
#define UI_REFERENCEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReferenceForm
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *ReferenceForm)
    {
        if (ReferenceForm->objectName().isEmpty())
            ReferenceForm->setObjectName(QStringLiteral("ReferenceForm"));
        ReferenceForm->resize(474, 376);
        verticalLayout = new QVBoxLayout(ReferenceForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(ReferenceForm);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        pushButton = new QPushButton(ReferenceForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(ReferenceForm);

        QMetaObject::connectSlotsByName(ReferenceForm);
    } // setupUi

    void retranslateUi(QWidget *ReferenceForm)
    {
        ReferenceForm->setWindowTitle(QApplication::translate("ReferenceForm", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        pushButton->setText(QApplication::translate("ReferenceForm", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ReferenceForm: public Ui_ReferenceForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REFERENCEFORM_H
