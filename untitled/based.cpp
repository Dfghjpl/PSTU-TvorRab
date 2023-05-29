#include "based.h"
#include "ui_based.h"
#include <QString>
#include<QMessageBox>

Based::Based(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Based)
{
    ui->setupUi(this);

    form =new Zakazvmagaz;
    connect(this,&Based::signal,form,&Zakazvmagaz::slot);



    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Qt/Detals.db");
    if (db.open()){
        qDebug("open");

    }else{
        qDebug("no open");
    }
    //query=new QSqlQuery(db);
    //query->exec("CREATE TABLE Detaile(Name TEXT,Counter INT);");

    model = new QSqlTableModel(this,db);
    model->setTable("Детали");
    //model->setFilter("Name = 'коленчатый вал'");
    model->select();
    ui->tableView->setModel(model);

}

Based::~Based()
{
    delete ui;
}

void Based::slot(QString a)
{
    ui->Find->setText(a);
    QString request = QString("Name = '%1'").arg(a);
    model->setFilter(request);
    model->select();

}

void Based::on_pushButton_2_clicked()
{
    hide();
}


void Based::on_pushButton_clicked()
{
    model->insertRow(model->rowCount());
}


void Based::on_pushButton_4_clicked()
{
    form->show();
    emit signal(ui->Find->text());

    hide();
    zakaz = new Zakazvmagaz(this);
    zakaz->show();
}


void Based::on_pushButton_3_clicked()
{
    QMessageBox::information(this,"Заказ сформирован на складе","Пройдите к складу для получения заказа. Внимание заказ может быть тяжёлым поэтому лучше иметь с собой технику, для его транспортировки. ");
}

