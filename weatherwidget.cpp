#include "weatherwidget.h"
#include "ui_weatherwidget.h"




WeatherWidget::WeatherWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WeatherWidget),
    mIconLabel(this),
    mWeatherImage(new QPixmap())

{
    ui->setupUi(this);
    ui->weatherLabel->setText("Current Weather:");

    QString url = "/home/dave-tigre/Documents/git/pi_station/assets/sunny.png";
    mWeatherImage->load(url);

    mIconLabel.setPixmap(mWeatherImage->scaled(mImageXScale,mImageYScale));

    QHBoxLayout *layout = new QHBoxLayout(this);
    layout->addWidget(&mIconLabel);
    ui->weatherWidget->setLayout(layout);

    updateWeather();

}

WeatherWidget::~WeatherWidget()
{
    curl_global_cleanup();
    delete ui;
}

void WeatherWidget::requestWeather(WeatherReport &inWeatherReport)
{
    inWeatherReport.weatherId = 800;
    inWeatherReport.mainWeather = "Clear";
    inWeatherReport.description = "clear sky";
    inWeatherReport.icon = "01d";
    inWeatherReport.temp = 282.55;
    inWeatherReport.humidity = 100;
    inWeatherReport.windSpeed = 1.5;
}

size_t WeatherWidget::weatherCallback(void *contents, size_t size, size_t nmemb, void *userp)
{
    ((std::string*)userp)->append((char*)contents, size * nmemb);
    return size * nmemb;
}

void WeatherWidget::updateWeather()
{
    struct WeatherReport latestReport;
    
    // curl_global_init(CURL_GLOBAL_ALL);
    
    /* init the curl session */ 
    curl = curl_easy_init();

    if (curl)
    {
        curl_easy_setopt(curl, CURLOPT_URL, "api.openweathermap.org/data/2.5/weather?q=Philadelphia,pa,us&mode=xml&appid=c914103bc3250971289b1634cebc8efc");
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, weatherCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);
        res = curl_easy_perform(curl);

    }

   std::cout << readBuffer << std::endl;
    
    
    /* cleanup curl stuff */ 
    curl_easy_cleanup(curl);
}

std::string WeatherWidget::getWeatherIconImageLocation(const std::string inWeatherIcon)
{
    if (inWeatherIcon == "01d") return "sunny.png";
    else return "ERROR";
}
