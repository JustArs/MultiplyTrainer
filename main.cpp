#include "mainwindow.h"

#include <QApplication>
#include <QSplashScreen>
#include <QElapsedTimer>

void loadModules(QSplashScreen* psplash) {
    QElapsedTimer time;
    time.start();

    for (int i = 0; i < 100;) {
        if (time.elapsed() > 1){
            time.start();
            ++i;
        }

    psplash->showMessage("Загрузка: " + QString::number(i)+"%", Qt::AlignCenter|Qt::AlignCenter, Qt::white);
    qApp->processEvents();
    }
}

int main(int argc, char *argv[])
{
    srand(time(0));

    QApplication a(argc, argv);

    QApplication::setOrganizationName("Doofenshmirtz Evil Incorporated");
    QApplication::setApplicationName("Тренажер умножения");

    QFile file(":/style.css");
    file.open(QFile::ReadOnly);
    a.setStyleSheet(file.readAll());
    a.setWindowIcon(QIcon("../curs/img/icon.png"));
    QSplashScreen splash(QPixmap("../curs/img/splash.png"));
    splash.show();
    loadModules(&splash);
    MainWindow w;
    splash.finish(&w);
    //w.setFixedSize(w.width(),w.height());
    //w.setSizePolicy(QSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed));
    w.show();
    return a.exec();
}
