#ifndef BIKE_H
#define BIKE_H

class Velo
{
    public :
        Velo(int etat = 1, couleur = 0, prix = 10000);
        ~Velo();

        void setEtat(int etat);
        int getEtat();
        void setFuel(int fuel);
        int getFuel();
        void setCouleur(int couleur);
        int getCouleur(int couleur);
        void getPrix();
        int setPrix();
        bool aUnAntivol();
        void aUnAntivol(bool presenceAntivol);
        void description(); //affiche "Un velo qui coute x Euros"

    private:
        int m_etat; //neuf?
        int m_couleur;
        int m_prix;
        bool m_antivol;
};

#endif