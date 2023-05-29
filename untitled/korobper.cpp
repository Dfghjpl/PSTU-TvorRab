#include "korobper.h"
#include "ui_korobper.h"

korobper::korobper(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::korobper)
{
    ui->setupUi(this);
    form=new Based;
    connect(this, &korobper::signal,form,&Based::slot);

    QPixmap pix(":/img/img/Рисунок2.png");
    int w=ui->image->width();
    int h=ui->image->height();
    ui->image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));
}

korobper::~korobper()
{
    delete ui;
}

void korobper::on_pushButton_clicked()
{
    QString rita;
     if (ui->krishka->isChecked()){
         rita="крышка картера верхняя";
     }
     if (ui->udlinitel->isChecked()){
         rita="удлинитель коробки передач";
     }
     if (ui->firstval->isChecked()){
         rita="первичный вал";
     }
     if (ui->secondval->isChecked()){
         rita="вторичный вал";
     }
     if (ui->promezval->isChecked()){
         rita="промежуточный вал";
     }
     emit signal(rita);
     form->show();
}


void korobper::on_pushButton_2_clicked()
{
    QApplication::quit();
}

