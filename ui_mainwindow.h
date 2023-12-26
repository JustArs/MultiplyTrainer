/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *header;
    QPushButton *pushButtonExit;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButtonStatistic;
    QPushButton *pushButtonReference;
    QGridLayout *body;
    QPushButton *pushButtonRename;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QLabel *label_11;
    QComboBox *comboBox;
    QLabel *label_12;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *comboBox_2;
    QLabel *label_5;
    QSpacerItem *verticalSpacer_3;
    QPushButton *pushButtonStart;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonStop;
    QSpacerItem *horizontalSpacer_3;
    QLabel *timeLabel;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pushButtonAnswer;
    QSpacerItem *horizontalSpacer_8;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonReturnToMainPage;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pushButtonStatisticFromTailMainWindow;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(778, 520);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        verticalLayout = new QVBoxLayout(page);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        header = new QHBoxLayout();
        header->setSpacing(8);
        header->setObjectName(QStringLiteral("header"));
        header->setContentsMargins(0, 0, 0, 0);
        pushButtonExit = new QPushButton(page);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));

        header->addWidget(pushButtonExit);

        horizontalSpacer = new QSpacerItem(35, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        header->addItem(horizontalSpacer);

        pushButtonStatistic = new QPushButton(page);
        pushButtonStatistic->setObjectName(QStringLiteral("pushButtonStatistic"));

        header->addWidget(pushButtonStatistic);

        pushButtonReference = new QPushButton(page);
        pushButtonReference->setObjectName(QStringLiteral("pushButtonReference"));
        pushButtonReference->setProperty("blueButton", QVariant(true));

        header->addWidget(pushButtonReference);


        verticalLayout->addLayout(header);

        body = new QGridLayout();
        body->setObjectName(QStringLiteral("body"));
        pushButtonRename = new QPushButton(page);
        pushButtonRename->setObjectName(QStringLiteral("pushButtonRename"));
        pushButtonRename->setEnabled(true);

        body->addWidget(pushButtonRename, 5, 1, 1, 1);

        lineEdit_3 = new QLineEdit(page);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setAlignment(Qt::AlignCenter);

        body->addWidget(lineEdit_3, 6, 1, 1, 1);

        lineEdit = new QLineEdit(page);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setMaxLength(3);
        lineEdit->setAlignment(Qt::AlignCenter);

        body->addWidget(lineEdit, 2, 3, 1, 1);

        verticalSpacer = new QSpacerItem(100, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        body->addItem(verticalSpacer, 3, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        body->addItem(verticalSpacer_2, 0, 3, 1, 1);

        label_2 = new QLabel(page);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(10);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        body->addWidget(label_2, 1, 3, 1, 1);

        label_11 = new QLabel(page);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setAlignment(Qt::AlignCenter);

        body->addWidget(label_11, 5, 3, 1, 1);

        comboBox = new QComboBox(page);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QStringLiteral("comboBox"));

        body->addWidget(comboBox, 6, 3, 1, 1);

        label_12 = new QLabel(page);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        body->addWidget(label_12, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        body->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        comboBox_2 = new QComboBox(page);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        body->addWidget(comboBox_2, 2, 1, 1, 1);

        label_5 = new QLabel(page);
        label_5->setObjectName(QStringLiteral("label_5"));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_5->setFont(font1);
        label_5->setLayoutDirection(Qt::LeftToRight);
        label_5->setAlignment(Qt::AlignCenter);

        body->addWidget(label_5, 0, 2, 1, 1);


        verticalLayout->addLayout(body);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        pushButtonStart = new QPushButton(page);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));
        pushButtonStart->setProperty("blueButton", QVariant(true));

        verticalLayout->addWidget(pushButtonStart);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        verticalLayout_3 = new QVBoxLayout(page_2);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        pushButtonStop = new QPushButton(page_2);
        pushButtonStop->setObjectName(QStringLiteral("pushButtonStop"));

        horizontalLayout_2->addWidget(pushButtonStop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        timeLabel = new QLabel(page_2);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(timeLabel);

        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignCenter);
        label_3->setProperty("bigLabel", QVariant(true));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 1);

        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label_4);

        label_6 = new QLabel(page_2);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setAlignment(Qt::AlignCenter);
        label_6->setProperty("blueLabel", QVariant(true));

        horizontalLayout->addWidget(label_6);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setAlignment(Qt::AlignCenter);
        label_7->setProperty("redLabel", QVariant(true));

        horizontalLayout->addWidget(label_7);


        verticalLayout_3->addLayout(horizontalLayout);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_8);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        lineEdit_2 = new QLineEdit(page_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setMaxLength(3);
        lineEdit_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(lineEdit_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        pushButtonAnswer = new QPushButton(page_2);
        pushButtonAnswer->setObjectName(QStringLiteral("pushButtonAnswer"));
        pushButtonAnswer->setProperty("blueButton", QVariant(true));

        horizontalLayout_4->addWidget(pushButtonAnswer);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        horizontalLayout_4->setStretch(0, 1);
        horizontalLayout_4->setStretch(1, 1);
        horizontalLayout_4->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalLayout_3->setStretch(0, 1);
        verticalLayout_3->setStretch(1, 1);
        verticalLayout_3->setStretch(3, 1);
        verticalLayout_3->setStretch(4, 1);
        verticalLayout_3->setStretch(5, 1);
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        verticalLayout_4 = new QVBoxLayout(page_3);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font2;
        font2.setPointSize(25);
        font2.setBold(true);
        font2.setWeight(75);
        label_9->setFont(font2);
        label_9->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_9);

        label_10 = new QLabel(page_3);
        label_10->setObjectName(QStringLiteral("label_10"));
        QFont font3;
        font3.setPointSize(12);
        label_10->setFont(font3);
        label_10->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        verticalLayout_4->addWidget(label_10);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        pushButtonReturnToMainPage = new QPushButton(page_3);
        pushButtonReturnToMainPage->setObjectName(QStringLiteral("pushButtonReturnToMainPage"));
        pushButtonReturnToMainPage->setProperty("blueButton", QVariant(true));

        horizontalLayout_5->addWidget(pushButtonReturnToMainPage);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_9);

        pushButtonStatisticFromTailMainWindow = new QPushButton(page_3);
        pushButtonStatisticFromTailMainWindow->setObjectName(QStringLiteral("pushButtonStatisticFromTailMainWindow"));

        horizontalLayout_5->addWidget(pushButtonStatisticFromTailMainWindow);

        horizontalLayout_5->setStretch(0, 1);
        horizontalLayout_5->setStretch(1, 1);
        horizontalLayout_5->setStretch(2, 1);

        verticalLayout_4->addLayout(horizontalLayout_5);

        stackedWidget->addWidget(page_3);

        verticalLayout_2->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 778, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\242\321\200\320\265\320\275\320\260\320\266\321\221\321\200 \321\202\320\260\320\261\320\273\320\270\321\206\321\213 \321\203\320\274\320\275\320\276\320\266\320\265\320\275\320\270\321\217", nullptr));
        pushButtonExit->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\271\321\202\320\270", nullptr));
        pushButtonStatistic->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        pushButtonReference->setText(QApplication::translate("MainWindow", "?", nullptr));
        pushButtonRename->setText(QApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        lineEdit_3->setPlaceholderText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\270\320\274\321\217", nullptr));
        lineEdit->setInputMask(QString());
        lineEdit->setText(QApplication::translate("MainWindow", "20", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\267\320\260\320\264\320\260\320\275\320\270\320\271", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \321\200\320\265\320\266\320\270\320\274", nullptr));
        comboBox->setItemText(0, QApplication::translate("MainWindow", "\320\236\320\261\321\213\321\207\320\275\321\213\320\271", nullptr));
        comboBox->setItemText(1, QApplication::translate("MainWindow", "\320\235\320\260 \320\262\321\200\320\265\320\274\321\217", nullptr));
        comboBox->setItemText(2, QApplication::translate("MainWindow", "\320\221\320\265\321\201\320\272\320\276\320\275\320\265\321\207\320\275\321\213\320\271", nullptr));

        label_12->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 (\320\264\320\273\321\217 \321\200\320\265\320\266\320\270\320\274\320\260 \320\275\320\260 \320\262\321\200\320\265\320\274\321\217)", nullptr));
        comboBox_2->setItemText(0, QApplication::translate("MainWindow", "\320\234\320\265\320\264\320\273\320\265\320\275\320\275\320\260\321\217", nullptr));
        comboBox_2->setItemText(1, QApplication::translate("MainWindow", "\320\241\321\200\320\265\320\264\320\275\321\217\321\217", nullptr));
        comboBox_2->setItemText(2, QApplication::translate("MainWindow", "\320\221\321\213\321\201\321\202\321\200\320\260\321\217", nullptr));

        label_5->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\201\321\202\321\200\320\276\320\271\320\272\320\270", nullptr));
        pushButtonStart->setText(QApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\321\202\321\214", nullptr));
        pushButtonStop->setText(QApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\321\214\321\201\321\217", nullptr));
        timeLabel->setText(QApplication::translate("MainWindow", "\320\222\321\200\320\265\320\274\321\217:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "00:24", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\320\236\321\201\321\202\320\260\320\273\320\276\321\201\321\214 \320\267\320\260\320\264\320\260\320\275\320\270\320\271: 9", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "70%", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "30%", nullptr));
        label_8->setText(QString());
        label->setText(QApplication::translate("MainWindow", "5 x 6 = ", nullptr));
        lineEdit_2->setText(QString());
        pushButtonAnswer->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\262\320\265\321\202\320\270\321\202\321\214", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\320\240\320\225\320\227\320\243\320\233\320\254\320\242\320\220\320\242", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "\320\270\320\275\321\204\320\260", nullptr));
        pushButtonReturnToMainPage->setText(QApplication::translate("MainWindow", "\320\235\320\260 \320\263\320\273\320\260\320\262\320\275\321\203\321\216", nullptr));
        pushButtonStatisticFromTailMainWindow->setText(QApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
