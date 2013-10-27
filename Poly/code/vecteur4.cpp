#include "vecteur4.h"

Vecteur::Vecteur(unsigned int n) : dimension(n)
{
	data = new double[n];
}

Vecteur::~Vecteur()
{
	delete[] data;
}

unsigned int Vecteur::getDimension()
{
	return dimension;
}


Vecteur& Vecteur::operator=(const Vecteur &v)
{
	if (&v ==  this)
		return (*this);
		
	dimension = v.dimension;
	if (data !=  0)
		delete[] data;

	data = new double [dimension];
	for(int i = 0; i < dimension ; i++)
		data[ i ] = v.data[ i ];
	
	return (*this);	
}

Vecteur::Vecteur(const Vecteur &v)
{
	dimension = v.dimension;
	
	if (data != 0)
		delete[] data;
	
	data = new double [dimension];
	for(int i = 0; i < dimension ; i++)
		data[ i ] = v.data[ i ];	
}

double & Vecteur::operator[](unsigned int i)
{
	return data[ i ];
}
