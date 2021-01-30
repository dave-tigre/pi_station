/********************************************************************************
** Form generated from reading UI file 'weatherwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERWIDGET_H
#define UI_WEATHERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeatherWidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QLabel *weatherLabel;
    QFrame *weatherFrame;

    void setupUi(QWidget *WeatherWidget)
    {
        if (WeatherWidget->objectName().isEmpty())
            WeatherWidget->setObjectName(QStringLiteral("WeatherWidget"));
        WeatherWidget->resize(530, 469);
        verticalLayout_2 = new QVBoxLayout(WeatherWidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        frame = new QFrame(WeatherWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        weatherLabel = new QLabel(frame);
        weatherLabel->setObjectName(QStringLiteral("weatherLabel"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(weatherLabel->sizePolicy().hasHeightForWidth());
        weatherLabel->setSizePolicy(sizePolicy);

        verticalLayout->addWidget(weatherLabel);

        weatherFrame = new QFrame(frame);
        weatherFrame->setObjectName(QStringLiteral("weatherFrame"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(weatherFrame->sizePolicy().hasHeightForWidth());
        weatherFrame->setSizePolicy(sizePolicy1);
        weatherFrame->setFrameShape(QFrame::StyledPanel);
        weatherFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(weatherFrame);


        verticalLayout_2->addWidget(frame);


        retranslateUi(WeatherWidget);

        QMetaObject::connectSlotsByName(WeatherWidget);
    } // setupUi

    void retranslateUi(QWidget *WeatherWidget)
    {
        WeatherWidget->setWindowTitle(QApplication::translate("WeatherWidget", "Form", Q_NULLPTR));
        weatherLabel->setText(QApplication::translate("WeatherWidget", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WeatherWidget: public Ui_WeatherWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERWIDGET_H
