#ifndef BLOKCIL_H
#define BLOKCIL_H

#include <QDialog>
#include<QtDebug>
#include<QString>
#include<based.h>


namespace Ui {
class blokcil;
}

class blokcil : public QDialog
{
    Q_OBJECT

public:
    explicit blokcil(QWidget *parent = nullptr);
    ~blokcil();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::blokcil *ui;
    Based *form;

signals:
    void signal(QString);

};

#endif // BLOKCIL_H
