#include <pistation.h>
#include "./ui_pistation.h"

#include <ctime>
#include <string>
#include <QDateTime>

PIStation::PIStation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::PIStation)
    , clockTimer(this)
    , mWeatherWidget(new WeatherWidget)

{
    ui->setupUi(this);
    centralWidget()->layout()->setContentsMargins(0, 0, 0, 0);
    ui->menubar->setVisible(false);
    


    // Setting up time
    this->ui->timeLabel->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));
    QObject::connect(&clockTimer,&QTimer::timeout,this,&PIStation::updateTime);
    clockTimer.start(1000);

    QHBoxLayout  *layout = new QHBoxLayout(this);
    layout->addWidget(mWeatherWidget);
    ui->homeTab->setLayout(layout);
   

    ui->tabWidget->setTabText(0,QString("Weather"));
    ui->tabWidget->setTabText(1,QString("Security"));
    ui->tabWidget->setTabText(2,QString("Video"));

     QTimer::singleShot(0, this, SLOT(showFullScreen()));



}

PIStation::~PIStation()
{
    delete ui;
}

void PIStation::updateTime()
{
    this->ui->timeLabel->setText(QDateTime::currentDateTime().toString("hh:mm:ss"));
}

