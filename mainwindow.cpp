
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "config.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setWindowIcon(QIcon(":/menu/res/qygh.png"));
    setFixedSize(MAX_SCRREN_LENGTH,MAX_SCREEN_WIDTH);
    setWindowTitle("谁是人上人？");

    //设置退出弹框+按钮
    //connect(ui->menu,&Mymenu::readyforquit,[=](){
    /*ShapedWindow* quitwindow=new ShapedWindow(this,":/menu/res/QuitWindow.png");
        quitwindow->move((this->width()-quitwindow->width())*0.5,(this->height()-quitwindow->height())*0.5);

        MyPushButton* quit=new MyPushButton(quitw  indow,true,":/menu/res/QuitButton.png");
        connect(quit,&MyPushButton::clicked,[=](){
            this->close();
        });
        quit->move(40,210);


        MyPushButton* cancel=new MyPushButton(quitwindow,true,":/menu/res/CancelButton.png");
        connect(cancel,&MyPushButton::clicked,[=](){
            delete quitwindow;
        });
        cancel->move(270,210);
        quitwindow->show();*/
    //});
}

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QImage bg(":/menu/res/bk.png");
    bg=bg.scaled(size(),Qt::KeepAspectRatioByExpanding);
    painter.drawImage(0,0,bg);
}


MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_QuitButton_clicked()
{
    delete this;
}


void MainWindow::on_IntroButton_clicked()
{
    auto a = new Dialog(this);
    a->show();

}


void MainWindow::on_Start_game_clicked()
{

}

