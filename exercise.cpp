#include "exercise.h"

void Exercise::init(int exerciseNumber, int mode, int speed)
{
    data.mode = mode;
    data.speed = speed;
    data.exerciseNumber = exerciseNumber;
    exerciseLeft = exerciseNumber; //N заданий осталось
    exercisePassed = 0; //N заданий пройдено
    data.mistakeNumber = 0;
    data.correctNumber = 0;
    data.correctPercent = 0;
    data.mistakePercent = 0;
    data.time = QTime(0,0,0);
    if (data.mode == TIME) {
        calculateTime();
    }
}

void Exercise::calculateTime() {
    double sec = 0;
    switch(data.speed) {
    case SLOW: {
       sec = 5;
       break;
    }
    case MEDIUM: {
        sec = 3.5;
       break;
    }
    case FAST: {
       sec = 2.5;
       break;
    }
    }
    double calculatedTime = (double)data.exerciseNumber * sec;
    data.time = data.time.addSecs((int)calculatedTime);
    tmpTime = data.time;
}

void Exercise::calculatePercent() {
        data.correctPercent = round(((double)data.correctNumber/(double)exercisePassed) * 100.);
        data.mistakePercent = round(((double)data.mistakeNumber/(double)exercisePassed) * 100.);
}

bool Exercise::nextExercise(bool isCorrect) {
    exerciseLeft--;
    exercisePassed++;
    if(isCorrect)
        data.correctNumber ++;
    else
        data.mistakeNumber ++;
    calculatePercent();
    if(data.mode != ENDLESS) {
        if(exerciseLeft <= 0)
            return false;
    }
    return true;
}

void Exercise::calculateResult() {
    data.averageTime = (double)(data.time.second() + data.time.minute() * 60 + data.time.hour() * 3600)/(double)data.exerciseNumber;
    int unanswered = data.exerciseNumber - (data.correctNumber + data.mistakeNumber);
    if (unanswered != 0) {
        data.mistakeNumber += unanswered;
        exercisePassed += unanswered;
        calculatePercent();
    }
}
