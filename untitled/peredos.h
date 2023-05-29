#ifndef PEREDOS_H
#define PEREDOS_H

#include <QDialog>
#include<based.h>

namespace Ui {
class peredos;
}

class peredos : public QDialog
{
    Q_OBJECT

public:
    explicit peredos(QWidget *parent = nullptr);
    ~peredos();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::peredos *ui;
    Based *form;

signals:
    void signal(QString);

};

#endif // PEREDOS_H
