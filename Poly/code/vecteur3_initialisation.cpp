#include <math.h>
#include "vecteur3.h"

double Vecteur::norme()
{
    double total = 0;

    for(unsigned int i = 0; i < dimension; i++)
        total += coordonnees[ i ] * coordonnees[ i ];

    return sqrt(total);
}

Vecteur::Vecteur(unsigned int n):dimension(n)
{
    /* on alloue la m\'emoire n\'ecessaire*/
    coordonnees = new double [ dimension ];
}

Vecteur::~Vecteur()
{
    dimension=0;
    delete [] coordonnees;
}
