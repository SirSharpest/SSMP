#ifndef ARTIST_H
#define ARTIST_H

#include <QString>
#include <vector>
#include "album.h"


class Artist
{
public:
    Artist();
    Artist(QString name);

    QString getName();
    std::vector<Album> getAlbums();

    void addAlbum(Album album);


private:

    QString name;
    std::vector<Album> albums;

};

#endif // ARTIST_H
