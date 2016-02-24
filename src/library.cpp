#include "./headers/library.h"


Library::Library(){



}

void Library::populateLibrary(QWidget *parent){


    std::vector<QString> v =  FileScanner::findAllFiles(QString("/home/nathan/Test"), QString("mp3"));


    QProgressDialog progress(parent);
    progress.setWindowTitle("Scanning for Music");


    //progress bar settings
    float percentage;
    progress.show();
    int iterations = 0;


    for(std::vector<QString>::iterator it = v.begin(); it != v.end(); ++it) {

      TagLib::FileRef file(it->toUtf8());

      AudioFile tmp(*it, QString::fromStdWString(file.tag()->title().toWString())
                                                 , QString::fromStdWString(file.tag()->album().toWString())
                                                 , QString::fromStdWString(file.tag()->artist().toWString()));


      //Add temp to files
      files.push_back(tmp);


      iterations++;


      QApplication::processEvents();

      percentage = float(iterations)/v.size();

      progress.setValue(percentage*100);
      progress.update();




      if(progress.wasCanceled()){
          break;

      }



    }




}



void Library::progressCancelled(){


}


void Library::setArtists(){

    //For every file
    for(std::vector<AudioFile>::iterator it = files.begin(); it != files.end(); ++it) {

        bool isInVec = false;


        //check if its in the Artists data
        for(std::vector<Artist>::iterator ait = artists.begin(); ait != artists.end(); ++ait) {

            if(it->getArtist() == ait->getName()){
                isInVec = true;
                break;
            }
        }
        if(!isInVec){
            artists.push_back(Artist(it->getArtist()));
        }

    }



}

void Library::setAlbums(){

    //For every file
    for(std::vector<AudioFile>::iterator it = files.begin(); it != files.end(); ++it) {

        bool isInVec = false;


        //check if its in the Artists data
        for(std::vector<Album>::iterator ait = albums.begin(); ait != albums.end(); ++ait) {

            if(it->getAlbum() == ait->getName()){
                isInVec = true;
                break;
            }
        }
        if(!isInVec){
            albums.push_back(Album(it->getAlbum()));
        }

    }


}




std::vector<Artist> Library::getArtists(){
    return this->artists;
}



std::vector<Album> Library::getAlbums(){
    return this->albums;
}


