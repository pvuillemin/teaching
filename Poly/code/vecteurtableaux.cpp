#include <math.h> //Pour la fonction 
#include <iostream.h>


double norme(double *vecteur, int dimension)
{
    double total=0;

    for(int i = 0 ; i < dimension  ; i++)
        total += vecteur[i] * vecteur[i];

    return sqrt(total);
}

int main()
{
    const int dimension = 3;
    
    double *vecteur = new double[dimension];

    for(int i = 0; i < dimension; i++)
    {
    	vecteur [ i ] = 1;

    }	

    cout << norme(vecteur, dimension);
    
    delete[] vecteur;

    return 0;
}

