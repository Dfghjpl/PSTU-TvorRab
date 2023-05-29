#ifndef GIDROPEREDACHA_H
#define GIDROPEREDACHA_H

#include <QDialog>
#include<based.h>


namespace Ui {
class Gidroperedacha;
}

class Gidroperedacha : public QDialog
{
    Q_OBJECT

public:
    explicit Gidroperedacha(QWidget *parent = nullptr);
    ~Gidroperedacha();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Gidroperedacha *ui;
    Based *form;

signals:
    void signal(QString);
};

#endif // GIDROPEREDACHA_H
