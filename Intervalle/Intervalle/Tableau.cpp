#include "Tableau.h"

Tableau::Tableau(int t){
	this->taille = t;
	T = new double[t];
	for (int i = 0; i < this->taille; i++) {
		T[i] = 0;
	}
}

Tableau::Tableau(const Tableau&c) {
	this->taille = c.taille;
	T = new double[this->taille];
	for (int i = 0; i < this->taille; i++) {
		this->T[i] = c.T[i];
	}
}

double& Tableau::operator[](int i)const{
	if (i >= 0 || i < taille) {
		return this->T[i];
	}else{
		exit(-1);
	}
}

Tableau Tableau::operator=(const Tableau& Tab){
	if (this != &Tab) {
		double* tmp = new double[Tab.taille];

		for (int i = 0; i < Tab.taille; i++)
			tmp[i] = Tab.T[i];

		delete[] T;

		this->T = tmp;
		this->taille = Tab.taille;
	}

	return *this;
}

Tableau::~Tableau(){
	delete[] T;
}

void Tableau::afficher() const{
	cout << "Tab[" << this->taille << "]" << endl;
}


