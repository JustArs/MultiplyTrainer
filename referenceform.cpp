#include "referenceform.h"
#include "ui_referenceform.h"



ReferenceForm::ReferenceForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ReferenceForm)
{
    ui->setupUi(this);
    ui->textBrowser->setSource(QUrl::fromLocalFile("../curs/help/index.html"));
}

ReferenceForm::~ReferenceForm()
{
    delete ui;
}


void ReferenceForm::on_pushButton_clicked()
{
    close();
}

