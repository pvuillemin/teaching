#include "vecteur3.h"
#include <iostream.h>

int main()
{
    Vecteur v(2); /* Appel automatique du constructeur*/

    v.coordonnees[ 0 ] = 1 ;
    v.coordonnees[ 1 ] = 1 ;

    /* On calcule la norme */
    cout <<  v.norme() << endl;
     /* Appel automatique du destructeur (transparent pour l'utilisateur)*/
    return 0;
}
