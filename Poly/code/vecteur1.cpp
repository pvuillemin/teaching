#include "vecteur1.h"
#include <math.h>

double norme(Vecteur &v)
{
    double total = 0;
    int i;

    for( i = 0 ; i < v.dimension ;  i++)
        total += v.coordonnees[i] * v.coordonnees[i];

    return sqrt(total);
}

void creeVecteur(Vecteur &v, int dimension)
{
    v.dimension=dimension;
    /* on alloue la m\'emoire n\'ecessaire*/
    v.coordonnees = new double [ dimension ]; 
}

void detruitVecteur(Vecteur &v)
{
    v.dimension = 0;
    delete[] v.coordonnees;
}
