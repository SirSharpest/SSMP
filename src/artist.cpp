#include "./headers/artist.h"

Artist::Artist()
{

}

Artist::Artist(QString name){

    this->name = name;

}

QString Artist::getName(){

    return this->name;

}


std::vector<Album> Artist::getAlbums(){

    return this->albums;

}

void Artist::addAlbum(Album album){
    this->albums.push_back(album);
}
