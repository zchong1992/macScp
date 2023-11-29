#include "folder.h"
using namespace std;
Folder::Folder() {}

QStringList Folder::GetFolder() {
    QStringList *ls=new QStringList();
    ls->append(QString("."));
    ls->append(QString(".."));
    return *ls;
}



