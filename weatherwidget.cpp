#include "weatherwidget.h"
#include "ui_weatherwidget.h"

WeatherWidget::WeatherWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WeatherWidget)
{
    ui->setupUi(this);
    ui->weatherLabel->setText("Current Weather:");

    QString url = "/home/dave-tigre/Documents/git/pi_station/assets/sunny.png";
    weatherImage = new QPixmap(url);
    // = weatherImage->scaled(5, 5, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    QLabel *label = new QLabel(this);

    label->setPixmap(*weatherImage);

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(label);
    ui->weatherFrame->setLayout(layout);

}

WeatherWidget::~WeatherWidget()
{
    delete ui;
}
