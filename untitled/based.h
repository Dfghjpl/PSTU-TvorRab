#ifndef BASED_H
#define BASED_H

#include <QDialog>
#include<QSqlDatabase>
#include<QtDebug>
#include<QSqlError>
#include<QSqlQuery>
#include<QSqlTableModel>
#include<zakazvmagaz.h>

namespace Ui {
class Based;
}

class Based : public QDialog
{
    Q_OBJECT

public:
    explicit Based(QWidget *parent = nullptr);
    ~Based();

private:
    Ui::Based *ui;
    QSqlDatabase db;
    QSqlQuery * query;
    QSqlTableModel* model;
    Zakazvmagaz *zakaz;
    Zakazvmagaz *form;

signals:
    void signal(QString);

public slots:
    void slot(QString a);
private slots:
    void on_pushButton_2_clicked();
    void on_pushButton_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_3_clicked();
};

#endif // BASED_H
