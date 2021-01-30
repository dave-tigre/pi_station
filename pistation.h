#ifndef PISTATION_H
#define PISTATION_H

#include "weatherwidget.h"

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class PIStation; }
QT_END_NAMESPACE

class PIStation : public QMainWindow
{
    Q_OBJECT

    public:
        PIStation(QWidget *parent = nullptr);
        ~PIStation();

    private slots:
        void updateTime();

    private:
        Ui::PIStation *ui;

        QTimer clockTimer;
        WeatherWidget *mWeatherWidget;
};
#endif // PISTATION_H
