#include "blokcil.h"
#include "ui_blokcil.h"
#include"QString"
#include"QSpinBox"
#include<vbor.h>
#include"QWidget"


blokcil::blokcil(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::blokcil)
{
    ui->setupUi(this);
    form=new Based;
    connect(this, &blokcil::signal,form,&Based::slot);

    QPixmap pix(":/img/img/Рисунок2.png");
    int w=ui->image->width();
    int h=ui->image->height();
    ui->image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

}

blokcil::~blokcil()
{
    delete ui;
}

void blokcil::on_pushButton_clicked()
{



    QString rita;
     if (ui->golovka->isChecked()){
         rita="головка цилиндров";
     }
     if (ui->kolenchval->isChecked()){
         rita="коленчатый вал";
     }
     if (ui->mahovik->isChecked()){
         rita="маховик";
     }
     if (ui->raspredval->isChecked()){
         rita="распределительный вал";
     }
     if (ui->karter->isChecked()){
         rita="картер сцепления";
     }
     emit signal(rita);
     form->show();

}

void blokcil::on_pushButton_2_clicked()
{
    QApplication::quit();
}



