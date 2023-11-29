#ifndef FOLDER_H
#define FOLDER_H
#include "file.h"
#include <list>
#include "QString"
#include "QStringList"
class Folder
{
public:
    Folder();
    QStringList GetFolder();
private:
    std::list<File> fileList;
};

#endif // FOLDER_H
