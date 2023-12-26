#ifndef RECORDSDATABASE_H
#define RECORDSDATABASE_H
#include <QtSql>
#include "exercise.h"

class RecordsDataBase
{
public:
    RecordsDataBase();
    void connect();
    void addUserName(const QString &name);
    void addRecord(ExerciseData data, QString name);
    void closeDataBase();       // Закрытие базы данных
    QSqlDatabase db;
    bool openDataBase();        // Открытие базы данных
private:
    // Сам объект базы данных, с которым будет производиться работа


};

#endif // RECORDSDATABASE_H
