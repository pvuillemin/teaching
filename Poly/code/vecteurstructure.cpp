#include <math.h>
#include <iostream>
using namespace std;

struct Vecteur
{
    unsigned int dimension;
    double * coordonnees;
};

//On passe par reference, mais on ne modifie pas
double norme(const Vecteur &v)
{
    double total = 0;
    int i;

    for( i = 0 ; i < v.dimension ; i++)
        total += v.coordonnees[i] * v.coordonnees[i];

    return sqrt(total);
}

//on passe une reference pour pouvoir modifier
//le vecteur
void creeVecteur(Vecteur &v, int dimension)
{
    v.dimension = dimension;
    /* on alloue la memoire necessaire*/
    v.coordonnees = new double [ dimension ];
}

//on passe une reference pour pouvoir modifier 
//le vecteur
void detruitVecteur(Vecteur &v)
{
	delete[] v.coordonnees;
	v.dimension = 0;
}

int main()
{
    Vecteur v;

    creeVecteur(v,3);

    cout << norme(v); /*calcul de la norme*/

    detruitVecteur(v);

    return 0;
}
