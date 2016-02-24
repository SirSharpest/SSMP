#ifndef FILESCANNER_H
#define FILESCANNER_H


#include <QString>
#include <QDirIterator>
#include <QDebug>
#include <vector>

#include <fileref.h>


class FileScanner
{
public:
    FileScanner();

   static std::vector<QString> findAllFiles(QString directory, QString extension);


};

#endif // FILESCANNER_H
