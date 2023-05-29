#ifndef VBOR_H
#define VBOR_H
#include"blokcil.h"
#include <QDialog>
#include"korobper.h"
#include"gidroperedacha.h"
#include"peredos.h"

namespace Ui {
class vbor;
}

class vbor : public QDialog
{
    Q_OBJECT

public:
    explicit vbor(QWidget *parent = nullptr);
    ~vbor();

private slots:
    void on_blokcil_clicked();

    void on_korobper_clicked();

    void on_gidromehper_clicked();

    void on_perdos_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::vbor *ui;
    blokcil * cil;
    korobper * korob;
    Gidroperedacha * gidro;
    peredos * os;

};

#endif // VBOR_H
