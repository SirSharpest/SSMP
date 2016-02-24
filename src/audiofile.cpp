#include "./headers/audiofile.h"

AudioFile::AudioFile(QString location, QString track, QString album, QString artist)
{
    setLocation(location);
    setTrack(track);
    setAlbum(album);
    setArtist(artist);

}

QString AudioFile::getLocation(){
    return location;
}

QString AudioFile::getTrack(){
    return track;
}

QString AudioFile::getAlbum(){
    return album;
}

QString AudioFile::getArtist(){
    return artist;
}

void AudioFile::setLocation(QString location){
    this->location = location;
}

void AudioFile::setTrack(QString track){
    this->track = track;
}

void AudioFile::setAlbum(QString album){
    this->album = album;
}

void AudioFile::setArtist(QString artist){
    this->artist = artist;
}
