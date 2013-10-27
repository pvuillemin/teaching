#include "complexe2.h"


Complexe::Complexe(double _rho, double _theta):rho(_rho), theta(_theta)
{
}

Complexe::~Complexe()
{
}

double Complexe::module()
{
    return rho;
}

double Complexe::argument()
{
    return theta;
}
