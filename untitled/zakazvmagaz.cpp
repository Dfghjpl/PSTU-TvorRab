#include "zakazvmagaz.h"
#include "ui_zakazvmagaz.h"

Zakazvmagaz::Zakazvmagaz(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Zakazvmagaz)
{
    ui->setupUi(this);
}

Zakazvmagaz::~Zakazvmagaz()
{
    delete ui;
}

void Zakazvmagaz::on_pushButton_clicked()
{
    hide();
}

void Zakazvmagaz::slot(QString d)
{
    ui->nazvan->setText(d);
}

