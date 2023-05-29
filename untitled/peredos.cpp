#include "peredos.h"
#include "ui_peredos.h"

peredos::peredos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::peredos)
{
    ui->setupUi(this);
    form=new Based;
    connect(this, &peredos::signal,form,&Based::slot);

    QPixmap pix(":/img/img/Рисунок2.png");
    int w=ui->image->width();
    int h=ui->image->height();
    ui->image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

peredos::~peredos()
{
    delete ui;
}

void peredos::on_pushButton_clicked()
{
    QString rita;
     if (ui->tsapha->isChecked()){
         rita="повторная цапфа";
     }
     if (ui->stupitsa->isChecked()){
         rita="ступица колеса";
     }
     if (ui->shkvoren->isChecked()){
         rita="шкворень";
     }
     if (ui->baraban->isChecked()){
         rita="тормозной барабан";
     }
     emit signal(rita);
     form->show();

}


void peredos::on_pushButton_2_clicked()
{
    QApplication::quit();
}

