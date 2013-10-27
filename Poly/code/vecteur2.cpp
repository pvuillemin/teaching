#include <math.h>
#include "vecteur2.h"


double Vecteur::norme()
{
    double total = 0;

    for(unsigned int i = 0; i < dimension; i++)
        total += coordonnees[ i ] * coordonnees[ i ];

    return sqrt(total);
}

void Vecteur::construit(unsigned int n)
{
    dimension=n;
    /* on alloue la m\'emoire n\'ecessaire*/
    coordonnees = new double [ dimension ]; 
}

void Vecteur::detruit()
{
    dimension=0;
    delete [] coordonnees;
}

