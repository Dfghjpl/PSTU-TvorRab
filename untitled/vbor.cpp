#include "vbor.h"
#include "ui_vbor.h"
#include<QPixmap>


vbor::vbor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::vbor)
{
    ui->setupUi(this);

    QPixmap pix(":/img/img/блок цилиндров.png");
    int w=ui->bloccil->width();
    int h=ui->bloccil->height();
    ui->bloccil->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    QPixmap pix1(":/img/img/Рисунок4.png");
    int w1=ui->peredach->width();
    int h1=ui->peredach->height();
    ui->peredach->setPixmap(pix1.scaled(w1,h1,Qt::KeepAspectRatio));

    QPixmap pix2(":/img/img/Рисунок5.png");
    int w2=ui->label->width();
    int h2=ui->label->height();
    ui->label->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));

    QPixmap pix3(":/img/img/передняя ось.png");
    int w3=ui->label_2->width();
    int h3=ui->label_2->height();
    ui->label_2->setPixmap(pix3.scaled(w3,h3,Qt::KeepAspectRatio));
}

vbor::~vbor()
{
    delete ui;
}

void vbor::on_blokcil_clicked()
{

    cil=new blokcil(this);
    cil->show();

}


void vbor::on_korobper_clicked()
{

    korob = new korobper(this);
    korob->show();
}


void vbor::on_gidromehper_clicked()
{

    gidro = new Gidroperedacha(this);
    gidro->show();
}


void vbor::on_perdos_clicked()
{

    os = new peredos(this);
    os->show();
}


void vbor::on_pushButton_2_clicked()
{
    QApplication::quit();
}

