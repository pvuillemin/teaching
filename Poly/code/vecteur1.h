struct Vecteur
{
    unsigned int dimension;
    double * coordonnees;
};

double norme(Vecteur &v);
void creeVecteur(Vecteur &v, int dimension);
void detruitVecteur(Vecteur &v);

