#include "gidroperedacha.h"
#include "ui_gidroperedacha.h"
#include"QString"
#include"QDebug"

Gidroperedacha::Gidroperedacha(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Gidroperedacha)
{
    ui->setupUi(this);
    form=new Based;
    connect(this, &Gidroperedacha::signal,form,&Based::slot);

    QPixmap pix(":/img/img/Рисунок2.png");
    int w=ui->image->width();
    int h=ui->image->height();
    ui->image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

Gidroperedacha::~Gidroperedacha()
{
    delete ui;
}

void Gidroperedacha::on_pushButton_clicked()
{
    QString rita;
     if (ui->korpus->isChecked()){
         rita="корпус двойного фрикциона";
     }
     if (ui->pervival->isChecked()){
         rita="первичный вал";
     }
     if (ui->secondval->isChecked()){
         rita="вторичный вал";
     }
     if (ui->promezval->isChecked()){
         rita="промежуточный вал";
     }
     if (ui->turbkoleso->isChecked()){
         rita="турбинное колесо";
     }
     if (ui->nasosnoekoleso->isChecked()){
         rita="насосное колесо";
     }
     if (ui->reaktor->isChecked()){
         rita="реактор";
     }
     emit signal(rita);
     form->show();

}


void Gidroperedacha::on_pushButton_2_clicked()
{
    QApplication::quit();
}

