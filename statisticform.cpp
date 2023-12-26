
#include "statisticform.h"
#include "ui_statisticform.h"

statisticForm::statisticForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::statisticForm)
{
    ui->setupUi(this);
    limit = "10";
    printModeTable("0");
}

statisticForm::~statisticForm()
{
    delete ui;
}

void statisticForm::printModeTable(QString mode) {
    QSqlQueryModel* model = new QSqlQueryModel();
    dataBase.connect();
    QSqlQuery* query = new QSqlQuery(dataBase.db);
    query->prepare("SELECT users.name, records.exerciseNumber, correct, mistakes, records.time, records.averageTime "
                   "FROM records "
                   "JOIN users ON users.id == records.id_user "
                   "WHERE records.mode_id == " + mode + " "
                   "ORDER BY records.correct desc, records.averageTime asc "
                   "LIMIT " + limit); //лмао sqlinjection прив че дел
    query->exec();
    model->setQuery(std::move(*query));
    ui->tableView->setModel(model);
    dataBase.closeDataBase();
}

void statisticForm::on_pushButton_clicked()
{
    close();
}

void statisticForm::on_comboBox_currentIndexChanged(int index)
{
    printModeTable(QString::number(index));
}


void statisticForm::on_pushButton_2_clicked()
{
    limit = ui->lineEdit->text();
    printModeTable(QString::number(ui->comboBox->currentIndex()));
}

