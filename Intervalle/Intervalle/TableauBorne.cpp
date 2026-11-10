#include "TableauBorne.h"

TableauBorne::TableauBorne(int taille, float bInf, float bSup):Tableau(taille)
{
    if (bInf>bSup) {
        exit(-1);
    }
    this->BornInf = bInf;
    this->BornSup = bSup;
    for (int i = 0; i < taille; i++){
        T[i] = BornInf;
    }
}

double& TableauBorne::operator[](int i)const{
    
    if (i < 0 || i >= i) {
        exit(-1);
    }
    return T[i];
}

TableauBorne::~TableauBorne()
{
}
