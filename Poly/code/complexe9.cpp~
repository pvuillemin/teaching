#include <math.h>
#include <iostream.h>
#include "complexe8.h"


void Complexe::afficheCompteur()
{
	cout << compteur << endl;
}

unsigned int Complexe::compteur = 0;

Complexe::Complexe(double _rho, double _theta):rho(_rho), theta(_theta)
{
	compteur++;
}

Complexe::~Complexe()
{
	compteur--;
}



double Complexe::module()
{
    return rho;
}

double Complexe::getReel()
{
    return rho * cos(theta);
}


double Complexe::getImag()
{
    return rho * sin(theta);
}

double Complexe::getArgument()
{
    return theta;
}

void Complexe::setReel(double _reel)
{
	double oldReel = rho * cos(theta);
	double oldImag = rho * sin(theta);
	static const double pi = 3.141592653;

	rho = sqrt(_reel * _reel + oldImag * oldImag);

	if (_reel !=0)
		theta = atan(oldImag/_reel);
	else
		theta = pi/2;
}

void Complexe::setImag(double _imag)
{
	double oldReel = rho * cos(theta);
	double oldImag = rho * sin(theta);

	rho = sqrt(_imag * _imag + oldReel * oldReel);

	theta = atan(_imag/oldReel);

}
