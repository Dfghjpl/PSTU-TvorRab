#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"vbor.h"

#include<QMessageBox>
#include<QPixmap>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QPixmap pix(":/img/img/Рисунок1.png");
    int w=ui->image->width();
    int h=ui->image->height();
    ui->image->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));



    QPixmap pix2(":/img/img/Рисунок3.png");
    int w2=ui->image3->width();
    int h2=ui->image3->height();
    ui->image3->setPixmap(pix2.scaled(w2,h2,Qt::KeepAspectRatio));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString login =ui->login->text();
    QString pass =ui->pass->text();
    if ((login+pass=="Александр123") or (login+pass=="Виталий456") or (login+pass=="Алексей789") ){
        hide();
        window = new vbor(this);
        window->show();
    }else{
        QMessageBox::warning(this,"Ошибка авторизации","Проверьте правильность введенных вами данных");
    }
}

