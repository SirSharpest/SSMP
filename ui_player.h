/********************************************************************************
** Form generated from reading UI file 'player.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYER_H
#define UI_PLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_player
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QSlider *slider_progress;
    QLabel *label_2;
    QSlider *slider_volume;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *btn_stop;
    QPushButton *btn_start;
    QPushButton *btn_pause;
    QPushButton *btn_select;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_now_playing;
    QLabel *lbl_song_name;
    QLabel *lbl_time_progress;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QListWidget *listWidget_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *player)
    {
        if (player->objectName().isEmpty())
            player->setObjectName(QStringLiteral("player"));
        player->resize(616, 469);
        centralWidget = new QWidget(player);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 90, 601, 86));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        slider_progress = new QSlider(layoutWidget);
        slider_progress->setObjectName(QStringLiteral("slider_progress"));
        slider_progress->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(slider_progress, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        slider_volume = new QSlider(layoutWidget);
        slider_volume->setObjectName(QStringLiteral("slider_volume"));
        slider_volume->setValue(99);
        slider_volume->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(slider_volume, 1, 1, 1, 1);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(120, 180, 360, 34));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_stop = new QPushButton(layoutWidget1);
        btn_stop->setObjectName(QStringLiteral("btn_stop"));

        gridLayout_2->addWidget(btn_stop, 0, 2, 1, 1);

        btn_start = new QPushButton(layoutWidget1);
        btn_start->setObjectName(QStringLiteral("btn_start"));

        gridLayout_2->addWidget(btn_start, 0, 0, 1, 1);

        btn_pause = new QPushButton(layoutWidget1);
        btn_pause->setObjectName(QStringLiteral("btn_pause"));

        gridLayout_2->addWidget(btn_pause, 0, 1, 1, 1);

        btn_select = new QPushButton(layoutWidget1);
        btn_select->setObjectName(QStringLiteral("btn_select"));

        gridLayout_2->addWidget(btn_select, 0, 4, 1, 1);

        layoutWidget2 = new QWidget(centralWidget);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(10, 10, 601, 47));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        lbl_now_playing = new QLabel(layoutWidget2);
        lbl_now_playing->setObjectName(QStringLiteral("lbl_now_playing"));

        verticalLayout->addWidget(lbl_now_playing);

        lbl_song_name = new QLabel(layoutWidget2);
        lbl_song_name->setObjectName(QStringLiteral("lbl_song_name"));

        verticalLayout->addWidget(lbl_song_name);

        lbl_time_progress = new QLabel(centralWidget);
        lbl_time_progress->setObjectName(QStringLiteral("lbl_time_progress"));
        lbl_time_progress->setGeometry(QRect(260, 60, 131, 20));
        layoutWidget3 = new QWidget(centralWidget);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(10, 240, 591, 194));
        horizontalLayout = new QHBoxLayout(layoutWidget3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        listWidget = new QListWidget(layoutWidget3);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));

        horizontalLayout->addWidget(listWidget);

        listWidget_2 = new QListWidget(layoutWidget3);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));

        horizontalLayout->addWidget(listWidget_2);

        listWidget_3 = new QListWidget(layoutWidget3);
        listWidget_3->setObjectName(QStringLiteral("listWidget_3"));

        horizontalLayout->addWidget(listWidget_3);

        player->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(player);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        player->setStatusBar(statusBar);

        retranslateUi(player);

        QMetaObject::connectSlotsByName(player);
    } // setupUi

    void retranslateUi(QMainWindow *player)
    {
        player->setWindowTitle(QApplication::translate("player", "player", 0));
        label->setText(QApplication::translate("player", "Progress", 0));
        label_2->setText(QApplication::translate("player", "Volume", 0));
        btn_stop->setText(QApplication::translate("player", "Stop", 0));
        btn_start->setText(QApplication::translate("player", "Start", 0));
        btn_pause->setText(QApplication::translate("player", "Pause", 0));
        btn_select->setText(QApplication::translate("player", "Select File", 0));
        lbl_now_playing->setText(QApplication::translate("player", "Now Playing:", 0));
        lbl_song_name->setText(QString());
        lbl_time_progress->setText(QString());

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("player", "Ben Howard", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("player", "Else", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class player: public Ui_player {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYER_H
