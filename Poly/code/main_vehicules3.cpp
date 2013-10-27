#include "velo3.h"
#include "vehicule3.h"

void afficheDescriptionVehicules(Vehicule *listeVehicules, int nVehicules)
{
    //Attention, ne fonctionne pas!
    for(int i = 0; i < nVehicules; i++)
        listeVehicules[i].description();
}
	
int main()
{
	Velo * liste_velos = new Velo[10];

	afficheDescriptionVehicules(liste_velos, 10);

	delete[] liste_velos;

	return 0;
}
