#pragma once
#include "Tableau.h"
class TableauBorne :public Tableau{

protected:
    float BornSup;
    float BornInf;
  
public:
    TableauBorne(int, float, float);
    double& operator[](int i)const;
    ~TableauBorne();
};

