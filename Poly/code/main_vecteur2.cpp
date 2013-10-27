#include "vecteur2.h"
#include <iostream.h>

int main()
{
    Vecteur v;

    v.construit( 2 );

    v.coordonnees[ 0 ] = 1 ;
    v.coordonnees[ 1 ] = 1 ;

    /* On calcule la norme */
    cout << v.norme() << endl;

    /*On libere la memoire*/
    v.detruit();
    return 0;
}
