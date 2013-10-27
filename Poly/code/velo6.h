#include "vehicule6.h"
#include <iostream>
using namespace std;

class Velo : public Vehicule
{
    public:
        Velo(int etat = 1, 
		bool antivol = false, 
		int couleur = 0, 
		int prix = 10000);
	~Velo();

        virtual void description(); //affiche "Je suis un velo"

        bool aUnAntivol();
        void aUnAntivol(bool presenceAntivol);

    private:
        bool m_antivol;
};


