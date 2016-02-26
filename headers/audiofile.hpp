#ifndef AUDIOFILE_H
#define AUDIOFILE_H

#include <QString>

class AudioFile
{
public:
    AudioFile(QString location, QString track, QString album, QString artist);

    QString getLocation();
    QString getTrack();
    QString getAlbum();
    QString getArtist();

    void setLocation(QString location);
    void setTrack(QString track);
    void setAlbum(QString album);
    void setArtist(QString artist);

private:
    QString location;
    QString track;
    QString album;
    QString artist;


};

#endif // AUDIOFILE_H
