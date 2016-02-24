#ifndef ALBUM_H
#define ALBUM_H


#include <QString>

class Album
{
public:
    Album(QString name);

    QString getName();


private:

    QString name;

};

#endif // ALBUM_H
