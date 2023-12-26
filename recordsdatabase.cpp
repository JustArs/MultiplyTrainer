#include "recordsdatabase.h"
#include <QDebug>

RecordsDataBase::RecordsDataBase()
{

}

void RecordsDataBase::connect() {
    /* Перед подключением к базе данных производим проверку на её существование.
     * В зависимости от результата производим открытие базы данных или её восстановление
     * */
    this->openDataBase();

}

/* Метод для открытия базы данных
 * */
bool RecordsDataBase::openDataBase()
{
    /* База данных открывается по заданному пути
     * и имени базы данных, если она существует
     * */
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setHostName("cursMult");
    db.setDatabaseName("../curs/database/cursMult.db");
    if(db.open()){
        return true;
    } else {
        return false;
    }
}

/* Методы закрытия базы данных
 * */
void RecordsDataBase::closeDataBase()
{
    db.close();
}

void RecordsDataBase::addUserName(const QString &name) {
    connect();
    QSqlQuery query;
    if (!query.exec("SELECT name FROM users")) {
            return;
    }
    QSqlRecord rec = query.record();
    while (query.next()){
        if(name == query.value(rec.indexOf("name")))
            return;
    }

    query.prepare("INSERT OR IGNORE INTO users (name)"
                                  "VALUES (:name);"); //мемы с or
    query.bindValue(":name", name);
    query.exec();
    closeDataBase();
}

void RecordsDataBase::addRecord(ExerciseData data, QString name) {
    int id;
    connect();
    QSqlQuery query;
    if (!query.exec("SELECT * FROM users")) {
            return;
    }

    QSqlRecord rec = query.record();
    while (query.next()){
        rec = query.record();
        if(name == query.value("name").toString())
            id = query.value("id").toInt();
    }

    query.prepare("INSERT INTO records (mode_id, id_user, exerciseNumber, correct, mistakes, time, averageTime)"
                  "VALUES (:mode_id, :id_user, :exerciseNumber, :correct, :mistakes, :time, :averageTime);");
    query.bindValue(":mode_id", data.mode);
    query.bindValue(":id_user", id);
    query.bindValue(":exerciseNumber", data.exerciseNumber);
    query.bindValue(":correct", data.correctPercent);
    query.bindValue(":mistakes", data.mistakePercent);
    query.bindValue(":time", data.time);
    query.bindValue(":averageTime", data.averageTime);
    query.exec();
    closeDataBase();
}
