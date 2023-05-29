#ifndef ZAKAZVMAGAZ_H
#define ZAKAZVMAGAZ_H

#include <QDialog>


namespace Ui {
class Zakazvmagaz;
}

class Zakazvmagaz : public QDialog
{
    Q_OBJECT

public:
    explicit Zakazvmagaz(QWidget *parent = nullptr);
    ~Zakazvmagaz();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Zakazvmagaz *ui;
public slots:
    void slot(QString d);
};

#endif // ZAKAZVMAGAZ_H
