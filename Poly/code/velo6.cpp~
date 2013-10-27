#include "velo6.h"


Velo::Velo(int etat, bool antivol, int couleur, int prix):
	Vehicule(etat, couleur, prix), m_antivol(antivol)
{
}

Velo::~Velo()
{
}

bool Velo::aUnAntivol()
{
	return m_antivol;
}

void Velo::aUnAntivol(bool presenceAntivol)
{
	m_antivol = presenceAntivol;
}

void Velo::description()
{
	cout << "Un velo qui coute" << getPrix() << endl;
}
	
