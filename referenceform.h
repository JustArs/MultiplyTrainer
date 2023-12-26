#ifndef REFERENCEFORM_H
#define REFERENCEFORM_H

#include <QWidget>
#include <vector>

namespace Ui {
class ReferenceForm;
}

class ReferenceForm : public QWidget
{
    Q_OBJECT

public:
    explicit ReferenceForm(QWidget *parent = nullptr);
    ~ReferenceForm();

private slots:
    void on_pushButton_clicked();

private:
    Ui::ReferenceForm *ui;
};

#endif // REFERENCEFORM_H
