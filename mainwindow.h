
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDockWidget>
#include "dialog.h"
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow

{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_QuitButton_clicked();
    void on_IntroButton_clicked();

    void on_Start_game_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
