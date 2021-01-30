/********************************************************************************
** Form generated from reading UI file 'pistation.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PISTATION_H
#define UI_PISTATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PIStation
{
public:
    QAction *action_Exit;
    QAction *action_Exit_2;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *homeTab;
    QWidget *securityTab;
    QWidget *videoTab;
    QLabel *timeLabel;
    QMenuBar *menubar;
    QMenu *menu_File;

    void setupUi(QMainWindow *PIStation)
    {
        if (PIStation->objectName().isEmpty())
            PIStation->setObjectName(QStringLiteral("PIStation"));
        PIStation->resize(800, 656);
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PIStation->sizePolicy().hasHeightForWidth());
        PIStation->setSizePolicy(sizePolicy);
        action_Exit = new QAction(PIStation);
        action_Exit->setObjectName(QStringLiteral("action_Exit"));
        action_Exit_2 = new QAction(PIStation);
        action_Exit_2->setObjectName(QStringLiteral("action_Exit_2"));
        centralwidget = new QWidget(PIStation);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        homeTab = new QWidget();
        homeTab->setObjectName(QStringLiteral("homeTab"));
        tabWidget->addTab(homeTab, QString());
        securityTab = new QWidget();
        securityTab->setObjectName(QStringLiteral("securityTab"));
        tabWidget->addTab(securityTab, QString());
        videoTab = new QWidget();
        videoTab->setObjectName(QStringLiteral("videoTab"));
        tabWidget->addTab(videoTab, QString());

        verticalLayout_2->addWidget(tabWidget);

        timeLabel = new QLabel(centralwidget);
        timeLabel->setObjectName(QStringLiteral("timeLabel"));
        timeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(timeLabel);

        PIStation->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PIStation);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        PIStation->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menu_File->addAction(action_Exit_2);

        retranslateUi(PIStation);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PIStation);
    } // setupUi

    void retranslateUi(QMainWindow *PIStation)
    {
        PIStation->setWindowTitle(QApplication::translate("PIStation", "PIStation", Q_NULLPTR));
        action_Exit->setText(QApplication::translate("PIStation", "&Exit", Q_NULLPTR));
        action_Exit_2->setText(QApplication::translate("PIStation", "&Exit", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(homeTab), QApplication::translate("PIStation", "Tab 1", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(securityTab), QApplication::translate("PIStation", "Tab 2", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(videoTab), QApplication::translate("PIStation", "Page", Q_NULLPTR));
        timeLabel->setText(QApplication::translate("PIStation", "TextLabel", Q_NULLPTR));
        menu_File->setTitle(QApplication::translate("PIStation", "&File", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class PIStation: public Ui_PIStation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PISTATION_H
