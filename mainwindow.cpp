#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "thermogram.h"
#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    //QTabBar *tabBar = ui->sidebar->findChild<QTabBar *>(QLatin1String("qt_sidebar_tabbar"));
    //ui->sidebar->setFixedHeight(60);
    //QList<QTabBar *> tabBar = ui->sidebar->findChildren<QTabBar *>();
    //tabBar.at(0)->setTabText(1, "teste");
    //QRect rect = tabBar.at(0)->childrenRect();
    //rect.translate(10,20);

    //tabBar.at(0)->;
    //tabBar.at(0)->setFixedWidth(120);
    //tabBar.at(0)->tab
    //QList<QPaintEvent *> painter = tabBar.at(0)->findChildren<QPaintEvent *>();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_Open_thermogram_activated()
{
    QString path = QFileDialog::getOpenFileName(ui->centralWidget,tr("Select thermogram..."),"",tr("Temperature Matrix (*.txt);;Radiometric jpg (*.jpg)"));
     if( !path.isEmpty() ){
         QImage img;
         img.load(path);
         QPixmap pix = QPixmap::fromImage(img);
         QSize size = ui->screen->size();
         ui->screen->setPixmap(pix.scaled(size,Qt::KeepAspectRatio));
     }
}
