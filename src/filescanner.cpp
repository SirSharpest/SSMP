#include "./headers/filescanner.h"


std::vector<QString> FileScanner::findAllFiles(QString directory, QString extension){


    QDirIterator dirit("/home/nathan/Music", QDirIterator::Subdirectories);

    std::vector<QString> files;
    std::vector<TagLib::FileRef> file;



    while(dirit.hasNext()){
        dirit.next();
        if(QFileInfo(dirit.filePath()).isFile()){
            if(QFileInfo(dirit.filePath()).suffix() == "mp3"){
                files.push_back(dirit.filePath());
            }
        }
    }

    return files;


}
