#pragma once
#include<iostream> 
using namespace std;
class Tableau{
protected:
	int taille;
	double* T;
public:	
	Tableau(int);
	double& operator[](int )const;
	Tableau operator=(const Tableau&);
	~Tableau();
	Tableau(const Tableau&);
	void afficher()const;
	
};

