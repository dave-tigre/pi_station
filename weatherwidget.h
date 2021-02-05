#ifndef WEATHERWIDGET_H
#define WEATHERWIDGET_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <curl/curl.h>
#include <iostream>

#include <QWidget>
#include <QLabel>

namespace Ui {
class WeatherWidget;
}

struct WeatherReport
{
    int weatherId;
    std::string mainWeather;
    std::string description;
    std::string icon;
    float temp;
    float humidity;
    float windSpeed;

};


class WeatherWidget : public QWidget
{
    Q_OBJECT

public:
    explicit WeatherWidget(QWidget *parent = nullptr);
    ~WeatherWidget();



// private slots:
//     void updateWeather();

private:
    void requestWeather(WeatherReport &inWeatherReport);
    std::string getWeatherIconImageLocation(const std::string inWeatherIcon);
    static size_t weatherCallback(void *contents, size_t size, size_t nmemb, void *userp);
    void updateWeather();

private:
    Ui::WeatherWidget *ui;
    QPixmap *mWeatherImage;
    QLabel mIconLabel;

    const int mImageXScale = 70;
    const int mImageYScale = 70;
    std::string readBuffer;

    // WeatherReport mCurrentWeather;

    CURL *curl;
    CURLcode res;
};

#endif // WEATHERWIDGET_H
