#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QRegularExpressionValidator>
#include <QMessageBox>
#include <QTimer>
#include "ui_mainwindow.h"
#include <cstdlib>
#include "exercise.h"
#include "referenceform.h"
#include "statisticform.h"
#include "recordsdatabase.h"
#include <QCloseEvent>
#include <QShortcut>
#include <QSettings>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void loadSettings();
    void saveSettings();
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QSettings *settings;
    int mult1, mult2;
    int leftBorder, rightBorder;
    QTimer* timer;
    Exercise exercise;
    ReferenceForm* refForm;
    statisticForm* statForm;
    bool isNameAccept;
    RecordsDataBase dataBase;

    int random (int a, int b);
    void randMult();
    void initNewExercise();
    void fillResult();
    void closeEvent (QCloseEvent *e);


private slots:
//    void checkAnswer();
//    void on_pushButton_clicked();
    void on_pushButtonStart_clicked();
    void on_pushButtonStatistic_clicked();
    void on_pushButtonReference_clicked();
    void on_pushButtonAnswer_clicked();
    void on_pushButtonStop_clicked();
    void on_pushButtonReturnToMainPage_clicked();
    void runTimer();
    void on_pushButtonStatisticFromTailMainWindow_clicked();
    void on_pushButtonRename_clicked();
    void on_pushButtonExit_clicked();
};

#endif // MAINWINDOW_H
