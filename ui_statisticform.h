/********************************************************************************
** Form generated from reading UI file 'statisticform.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STATISTICFORM_H
#define UI_STATISTICFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_statisticForm
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QTableView *tableView;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *statisticForm)
    {
        if (statisticForm->objectName().isEmpty())
            statisticForm->setObjectName(QStringLiteral("statisticForm"));
        statisticForm->resize(649, 433);
        verticalLayout = new QVBoxLayout(statisticForm);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setHorizontalSpacing(100);
        label = new QLabel(statisticForm);
        label->setObjectName(QStringLiteral("label"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label);

        comboBox = new QComboBox(statisticForm);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, comboBox);

        label_2 = new QLabel(statisticForm);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit = new QLineEdit(statisticForm);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(4);
        lineEdit->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit);


        verticalLayout->addLayout(formLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(statisticForm);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout);

        tableView = new QTableView(statisticForm);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        pushButton = new QPushButton(statisticForm);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setProperty("blueButton", QVariant(true));

        horizontalLayout_2->addWidget(pushButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 1);

        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(statisticForm);

        QMetaObject::connectSlotsByName(statisticForm);
    } // setupUi

    void retranslateUi(QWidget *statisticForm)
    {
        statisticForm->setWindowTitle(QApplication::translate("statisticForm", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        label->setText(QApplication::translate("statisticForm", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\200\320\265\320\266\320\270\320\274:", nullptr));
        comboBox->setItemText(0, QApplication::translate("statisticForm", "\320\236\320\261\321\213\321\207\320\275\321\213\320\271", nullptr));
        comboBox->setItemText(1, QApplication::translate("statisticForm", "\320\235\320\260 \320\262\321\200\320\265\320\274\321\217", nullptr));
        comboBox->setItemText(2, QApplication::translate("statisticForm", "\320\221\320\265\321\201\320\272\320\276\320\275\320\265\321\207\320\275\321\213\320\271", nullptr));

        label_2->setText(QApplication::translate("statisticForm", "\320\241\320\272\320\276\320\273\321\214\320\272\320\276 \320\267\320\260\320\277\320\265\321\201\320\265\320\271 \320\262\321\213\320\262\320\276\320\264\320\270\321\202\321\214:", nullptr));
        lineEdit->setText(QApplication::translate("statisticForm", "10", nullptr));
        pushButton_2->setText(QApplication::translate("statisticForm", "\320\237\321\200\320\270\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        pushButton->setText(QApplication::translate("statisticForm", "\320\236\320\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class statisticForm: public Ui_statisticForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STATISTICFORM_H
