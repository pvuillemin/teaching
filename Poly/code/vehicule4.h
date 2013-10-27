#ifndef VEHICULE_H
#define VEHICULE_H

#include <iostream>
using namespace std;

class Vehicule
{
    public :
        Vehicule(int etat = 1, 
		int couleur = 0, 
		int prix = 10000);
        ~Vehicule();

        void setEtat(int etat);
        int getEtat();
        void setCouleur(int couleur);
        int getCouleur(int couleur);
        int getPrix();
        void setPrix(int prix);
        void description(); 

    protected:
	int m_prix;

    private:
        int m_etat; //neuf?
        int m_couleur;

};
#endif

