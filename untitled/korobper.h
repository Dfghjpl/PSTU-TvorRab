#ifndef KOROBPER_H
#define KOROBPER_H

#include <QDialog>
#include<based.h>

namespace Ui {
class korobper;
}

class korobper : public QDialog
{
    Q_OBJECT

public:
    explicit korobper(QWidget *parent = nullptr);
    ~korobper();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::korobper *ui;
    Based *form;

signals:
    void signal(QString);

};

#endif // KOROBPER_H
