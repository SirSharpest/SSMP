#ifndef LIBRARY_H
#define LIBRARY_H

#include "audiofile.hpp"
#include <QProgressDialog>
#include "filescanner.hpp"
#include <QDebug>
#include <fileref.h>
#include <QApplication>
#include <QString>
#include "artist.hpp"


class Library
{
public:
    Library();

    void populateLibrary(QWidget* parent);

    void setArtists();

    void setAlbums();

    void progressCancelled();

    std::vector<Artist> getArtists();

    std::vector<Album> getAlbums();

private:

    std::vector<AudioFile> files;
    std::vector<Album> albums;
    std::vector<Artist> artists;



};

#endif // LIBRARY_H
