#include <cmath>
#include <vector>
#include <QTime>
#include <functional>
#ifndef ATTEMPT_H
#define ATTEMPT_H

enum Mode {
    CLASSIC,
    TIME,
    ENDLESS
};

enum Speed {
    SLOW,
    MEDIUM,
    FAST
};

struct ExerciseData {
    int exerciseNumber; //общее кол-во заданий
    QTime time;
    double averageTime;
    int mistakeNumber; //кол-во ошибок
    int correctNumber; //кол-во правильных ответов
    double mistakePercent; //процент ошибок
    double correctPercent; //процент правильных
    int mode;
    int speed;
};

class Exercise
{
public:
    Exercise() {}
    void init(int exerciseNumber, int mode, int speed);
    int exerciseLeft; //заданий осталось
    int exercisePassed; //заданий пройдено
    ExerciseData data;
    bool nextExercise(bool isCorrect);
    void calculatePercent();
    void calculateResult();
    void calculateTime();
    QTime tmpTime;
};

#endif // ATTEMPT_H
