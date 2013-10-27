#include "vehicule2.h"
#include <iostream.h>

Vehicule::Vehicule(int etat, int couleur, int prix)
	:m_prix(prix), m_etat(etat), m_couleur(couleur)
{
	
}

Vehicule::~Vehicule()
{
}

void Vehicule::setEtat(int etat)
{
	m_etat = etat;
}

int Vehicule::getEtat()
{
	return m_etat;
}

      


void Vehicule::setPrix(int prix)
{
	m_prix = prix;
}

int Vehicule::getPrix()
{
	return m_prix;
}


