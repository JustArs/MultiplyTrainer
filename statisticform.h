#ifndef STATISTICFORM_H
#define STATISTICFORM_H

#include <QWidget>
#include "recordsdatabase.h"
#include "QStandardItemModel"
#include "QStandardItem"
namespace Ui {
class statisticForm;
}

class statisticForm : public QWidget
{
    Q_OBJECT

public:
    explicit statisticForm(QWidget *parent = nullptr);
    ~statisticForm();

private slots:
    void on_pushButton_clicked();
    void on_comboBox_currentIndexChanged(int index);
    void on_pushButton_2_clicked();

private:
    Ui::statisticForm *ui;
    RecordsDataBase dataBase;
    QString limit;

    void printModeTable(QString mode);
};

#endif // STATISTICFORM_H
