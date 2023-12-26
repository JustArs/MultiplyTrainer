#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSettings>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    settings = new QSettings(this);
    loadSettings();
    //возможно ввести только int//
    QRegularExpression rx("\\d*");
    QValidator* rxv = new QRegularExpressionValidator(rx, this);
    ui->lineEdit->setValidator(rxv);
    ui->lineEdit_2->setValidator(rxv);
    //нажатие на Enter в lineEdit
    connect(ui->lineEdit_2, SIGNAL(returnPressed()), SLOT(on_pushButtonAnswer_clicked()));

    timer = new QTimer();
    connect(timer, SIGNAL(timeout()), this, SLOT(runTimer()));

    leftBorder = 2;
    rightBorder = 9;
    isNameAccept = false;
    ui->pushButtonRename->setVisible(isNameAccept);
    new QShortcut(QKeySequence(Qt::Key_Escape), this, SLOT(close()));
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_U), this, SLOT(on_pushButtonStatistic_clicked()));
    new QShortcut(QKeySequence(Qt::CTRL + Qt::Key_I), this, SLOT(on_pushButtonReference_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::loadSettings()
{
    ui->lineEdit->setText(settings->value("countOfExercise").toString());
}

void MainWindow::saveSettings()
{
    settings->setValue("countOfExercise", ui->lineEdit->text());
}


void MainWindow::closeEvent (QCloseEvent *e)
{
    saveSettings();
    statForm->close();
    refForm->close();
}

int MainWindow::random (int a, int b) {
    return rand()%(b-a+1) + a;
}

//Рандомятся числа для перемножения
void MainWindow::randMult() {
    mult1 = random(leftBorder, rightBorder);
    mult2 = random(leftBorder, rightBorder);
    QString s1 = QString::number(mult1);
    QString s2 = QString::number(mult2);
    ui->label->setText(s1 + " X " + s2 + " = ");
}

//Работа таймера
void MainWindow::runTimer() {
    exercise.data.time = exercise.data.time.addSecs(1);
    if (exercise.data.mode == TIME) {
        exercise.tmpTime = exercise.tmpTime.addSecs(-1);
        if (exercise.tmpTime == QTime(0,0,0,0)) {
            fillResult();
        }
        ui->label_3->setText(exercise.tmpTime.toString());
    }
    else
        ui->label_3->setText(exercise.data.time.toString());
}

//При запуске новой заданий
void MainWindow::initNewExercise() {
    randMult();
    ui->label_8->clear();
    ui->lineEdit_2->clear();
    if (exercise.data.mode == ENDLESS) {
        ui->label_4->setText("Упражнений пройдено: " + QString::number(exercise.exercisePassed));
    }
    else {
        ui->label_4->setText("Упражнений осталось: " + QString::number(exercise.exerciseLeft));
    }
    ui->label_6->setText(QString::number(exercise.data.correctPercent) + "%");
    ui->label_7->setText(QString::number(exercise.data.mistakePercent) + "%");
    timer->start(1000);
    if (exercise.data.mode == TIME)
        ui->label_3->setText(exercise.tmpTime.toString());
    else
        ui->label_3->setText(exercise.data.time.toString());
}

//Главное окно -> Кнопка "Начать"
void MainWindow::on_pushButtonStart_clicked()
{
    int mode(0), speed(0), exerciseNumber(0);

    mode = ui->comboBox->currentIndex();
    speed = ui->comboBox_2->currentIndex();

    if (ui->lineEdit_3->text().isEmpty()) {
        QMessageBox::warning(this, "Ошибка!", "Введите имя!");
        return;
    }
    isNameAccept = true;
    ui->lineEdit_3->setReadOnly(isNameAccept);
    ui->pushButtonRename->setVisible(isNameAccept);

    if (ui->lineEdit->text().isEmpty() or ui->lineEdit->text().toInt() < 1) {
        QMessageBox::warning(this, "Ошибка!", "Укажите количество упражнений");
        return;
    }

    exerciseNumber = ui->lineEdit->text().toInt();

    exercise.init(exerciseNumber, mode, speed);
    initNewExercise();
    ui->stackedWidget->setCurrentIndex(1);
    dataBase.addUserName(ui->lineEdit_3->text());
}

//Главное окно -> Кнопка "Статистика"
void MainWindow::on_pushButtonStatistic_clicked()
{
    statForm = new statisticForm;
    statForm -> show();
}

//Главное окно -> Кнопка "Справка [?]"
void MainWindow::on_pushButtonReference_clicked()
{
    refForm = new ReferenceForm;
    refForm -> show();
}

//Окно умножений -> Кнопка "Ответить"
void MainWindow::on_pushButtonAnswer_clicked()
{
    if(ui->lineEdit_2->text().isEmpty()) {
        ui->label_8->setStyleSheet("QLabel { color : red; }");
        ui->label_8->setText("Введите ответ!");
        return;
    }
    int answer = ui->lineEdit_2->text().toInt();
    ui->lineEdit_2->clear();
    if (mult1 * mult2 == answer){
       ui->label_8->setStyleSheet("QLabel { color : green; }");
       ui->label_8->setText("Правильно!");
       if (exercise.nextExercise(true) == false){
           fillResult();
       }
    }
    else {
        ui->label_8->setStyleSheet("QLabel { color : red; }");
        ui->label_8->setText("Неправильно!");
        if (exercise.nextExercise(false) == false) {
            fillResult();
        }
    }
    randMult();
    if (exercise.data.mode == ENDLESS)
        ui->label_4->setText("Попыток пройдено: " + QString::number(exercise.exercisePassed));
    else
        ui->label_4->setText("Попыток осталось: " + QString::number(exercise.exerciseLeft));
    ui->label_6->setText(QString::number(exercise.data.correctPercent) + "%");
    ui->label_7->setText(QString::number(exercise.data.mistakePercent) + "%");
    ui->lineEdit_2->setFocus();
}

//Вывод результатов
void MainWindow::fillResult() {
    timer->stop();
    ui->stackedWidget->setCurrentIndex(2);
    QString str = "Всего времени: " + exercise.data.time.toString() + "\n";
    if(exercise.data.mode == ENDLESS){
        exercise.data.exerciseNumber = exercise.exercisePassed;
    }
    str += "Всего заданий: " + QString::number(exercise.data.exerciseNumber) + "\n";
    exercise.calculateResult();
    str += "Среднее время ответа: " + QString::number(exercise.data.averageTime) + " сек.\n";
    str += "Правильно: " + QString::number(exercise.data.correctNumber) + " [" + QString::number(exercise.data.correctPercent) + "%]\n";
    str += "Неправильно: " + QString::number(exercise.data.mistakeNumber) + " [" + QString::number(exercise.data.mistakePercent) + "%]\n";
    ui->label_10->setText(str);
    dataBase.addRecord(exercise.data, ui->lineEdit_3->text());
}

//Окно умножений -> Кнопка "Остановиться"
void MainWindow::on_pushButtonStop_clicked()
{
    timer->stop();
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Выход", "Вы уверены, что хотите выйти?", QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {
        fillResult();
    }
    else {
        timer->start();
    }
}

//Окно результата -> На главную
void MainWindow::on_pushButtonReturnToMainPage_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

//Окно результата -> Статистика
void MainWindow::on_pushButtonStatisticFromTailMainWindow_clicked()
{
    statForm = new statisticForm;
    statForm -> show();
}


void MainWindow::on_pushButtonRename_clicked()
{
    ui->lineEdit_3->clear();
    ui->lineEdit_3->setReadOnly(false);
}


void MainWindow::on_pushButtonExit_clicked()
{
    close();
}

