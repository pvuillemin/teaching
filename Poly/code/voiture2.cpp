#include "voiture2.h"
#include <iostream>
using namespace std;

Voiture::Voiture(int etat, int fuel, int couleur, int prix)
:Vehicule(etat, couleur, prix),  m_fuel(fuel)
{
}

Voiture::~Voiture()
{
}


void Voiture::setFuel(int fuel)
{
	m_fuel = fuel;
}

int Voiture::getFuel()
{
	return m_fuel;
}

void Voiture::description()
{
	cout << "Une voiture qui coute " << m_prix << endl;
}
