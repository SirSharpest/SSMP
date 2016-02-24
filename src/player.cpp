#include "./headers/player.h"
#include "ui_player.h"



player::player(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::player),
    selected_song(""),
    library(){



    ui->setupUi(this);

    audio_player = new QMediaPlayer(this);


    /*
     *
     * Connectors be done here
     *
     */
    connect(audio_player, &QMediaPlayer::positionChanged, this,
            &player::on_position_changed);

    connect(audio_player, &QMediaPlayer::durationChanged, this,
            &player::on_duration_changed);



}

player::~player()
{
    delete ui;
}




void player::on_slider_progress_sliderMoved(int position)
{
    audio_player->setPosition(position);

}

void player::on_slider_volume_sliderMoved(int position)
{
    audio_player->setVolume(position);

}

void player::on_btn_start_clicked()
{

    library.populateLibrary(this->parentWidget());
    library.setArtists();
    library.setAlbums();


    std::vector<Artist> artists = library.getArtists();
    for(std::vector<Artist>::iterator ait = artists.begin(); ait != artists.end(); ++ait) {
        ui->listWidget->addItem(ait->getName());
    }

    std::vector<Album> albums = library.getAlbums();
    for(std::vector<Album>::iterator ait = albums.begin(); ait != albums.end(); ++ait) {
        ui->listWidget_2->addItem(ait->getName());
    }





       //load the file
       if(selected_song != ""){
           audio_player->setMedia(QUrl::fromLocalFile(selected_song));
           audio_player->play();
       }

       //print an error if there is one
       if(audio_player->errorString() != "")
            qDebug() << audio_player->errorString();


}

void player::on_btn_stop_clicked()
{
   audio_player->stop();
}

void player::on_duration_changed(qint64 position)
{
    ui->slider_progress->setMaximum(position);
}

void player::on_position_changed(qint64 position)
{
    //move slider on screen to reflect progress in file
    ui->slider_progress->setValue(position);


    //Setting the time
    QString time_elapsed, time_total;

    int total_seconds, total_minutes;

    total_seconds = (audio_player->duration()/1000) % 60;
    total_minutes = (audio_player->duration()/1000) / 60;

    if(total_minutes >= 60){
        int total_hours = (total_minutes/60);
        total_minutes = total_minutes - (total_hours*60);
        time_total = QString("%1").arg(total_hours, 2,10,QChar('0')) + ':' + QString("%1").arg(total_minutes, 2,10,QChar('0')) + ':' + QString("%1").arg(total_seconds, 2,10,QChar('0'));

    }else{
        time_total = QString("%1").arg(total_minutes, 2,10,QChar('0')) + ':' + QString("%1").arg(total_seconds, 2,10,QChar('0'));

    }

    //calculate time elapsed
    int seconds, minutes;

    seconds = (position/1000) % 60;
    minutes = (position/1000) / 60;

    //if minutes is over 60 then we should really display hours
    if(minutes >= 60){
        int hours = (minutes/60);
        minutes = minutes - (hours*60);
        time_elapsed = QString("%1").arg(hours, 2,10,QChar('0')) + ':' + QString("%1").arg(minutes, 2,10,QChar('0')) + ':' + QString("%1").arg(seconds, 2,10,QChar('0'));
    }else{
        time_elapsed = QString("%1").arg(minutes, 2,10,QChar('0')) + ':' + QString("%1").arg(seconds, 2,10,QChar('0'));
    }



    ui->lbl_time_progress->setText(time_elapsed + '/' + time_total);

}

void player::on_btn_select_clicked()
{
    selected_song = QFileDialog::getOpenFileName();

    TagLib::FileRef file(selected_song.toUtf8().constData());


    ui->lbl_song_name->setText(
                QString::fromWCharArray(file.tag()->title().toCWString()));

}




void player::on_btn_pause_clicked()
{
    if(audio_player->state() == QMediaPlayer::PlayingState){
        audio_player->pause();
        ui->btn_pause->setText(QString("Resume"));
    }else{
        audio_player->play();
        audio_player->setPosition(audio_player->position());
        ui->btn_pause->setText(QString("Pause"));

    }

}




void player::on_listWidget_itemClicked(QListWidgetItem *item)
{
  /*  ui->listWidget_2->clear();

    qDebug() << ui->listWidget->row(item);

    if(item->text() == "Ben Howard"){
        ui->listWidget_2->addItem(QString("Hello"));
    }else{
        ui->listWidget_2->addItem(QString("World"));
    }

    */

}

