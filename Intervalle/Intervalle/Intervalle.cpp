#include <iostream>
#include"Tableau.h"
#include"TableauBorne.h"

int main(){
	
	Tableau T(5);

    for (int i = 0; i < 5; i++) {
        T[i] = (i + 1) * 2.5;
    }

    for (int i = 0; i < 5; i++) {
        cout << T[i] << " " ;
    }
    cout << endl;
    Tableau T1 = T;

    cout << "Copie de Tableau:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << T1[i] << " ";
    }
    cout << endl;
    
    TableauBorne T2(5, 3.5, 8.0);
    cout << " Tableau Borne:" << endl;

    for (int i = 0; i < 5; i++){
        cout << T2[i] << " ";
    }





}
