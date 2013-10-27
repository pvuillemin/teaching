#include "vecteur4.h"
#include <iostream>
using namespace std;


/*Passage par valeur d'un objet*/
double sommeComposantes(Vecteur v)
{
	double total = 0;
	unsigned int i;
	
	for(i = 0; i < v.getDimension(); i++)
		total += v[i];

	return total;
}


int main()
{
	Vecteur v1(5), v2(6);
	
	for(int i = 0; i < v1.getDimension(); i++)
		v1[i] = 3;
	
	/*copie, v2 change de taille au passage*/
	v2 = v1;
	
	cout << "La Somme des composantes du vecteur vaut " ;
	cout << sommeComposantes(v2);
	
	return 0;
}




