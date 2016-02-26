#ifndef PLAYER_H
#define PLAYER_H

#include <QMainWindow>
#include <QtMultimedia/QMediaPlayer>
#include <QDebug>
#include <QFileDialog>
#include <QStandardItemModel>
#include <QListWidgetItem>
#include "../headers/library.h"
#include <QProgressDialog>
#include <fileref.h>
#include <QFileInfo>
#include "../headers/artist.h"



namespace Ui {
class player;
}

class player : public QMainWindow
{
    Q_OBJECT

public:
    explicit player(QWidget *parent = 0);
    ~player();

private slots:

    void on_slider_volume_sliderMoved(int position);

    void on_slider_progress_sliderMoved(int position);

    void on_btn_start_clicked();

    void on_btn_stop_clicked();

    void on_duration_changed(qint64 position);

    void on_position_changed(qint64 position);


    void on_btn_select_clicked();



    void on_btn_pause_clicked();



    void on_listWidget_itemClicked(QListWidgetItem *item);


private:
    Ui::player *ui;
    QMediaPlayer* audio_player;
    QString selected_song;
    Library library;

};

#endif // PLAYER_H
