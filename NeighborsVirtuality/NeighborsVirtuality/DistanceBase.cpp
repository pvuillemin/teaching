#include "DistanceBase.h"
#include <math.h>


DistanceBase::DistanceBase(void)
{
}


DistanceBase::~DistanceBase(void)
{
}

double L1Distance::Distance(double* v1, double* v2, int n)
{
	 double sum = 0;

     //No loop unrolling here, but that should be optimized later
     for (int i = 0; i < n; i++)
     {
        double d = v1[i] - v2[i];
		sum += abs(d);
     }

     return sum;
}

double L2Distance::Distance(double* v1, double* v2, int n)
{
	 double sum = 0;

     //No loop unrolling here, but that should be optimized later
     for (int i = 0; i < n; i++)
     {
        double d = v1[i] - v2[i];
		sum += d * d;
     }

     return sum;
}



