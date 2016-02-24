#include "./headers/album.h"

Album::Album(QString name)
{
    this->name = name;
}


QString Album::getName(){

    return this->name;

}
