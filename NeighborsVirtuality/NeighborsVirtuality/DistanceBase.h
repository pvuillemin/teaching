#pragma once
#include <math.h>

class DistanceBase
{
public:
	DistanceBase(void);
	~DistanceBase(void);
	virtual double Distance(double* v1, double* v2, int n)=0;
};

class L1Distance : public DistanceBase
{
public:
	double Distance(double* v1, double* v2, int n);
};

class L2Distance : public DistanceBase
{
public:
	double Distance(double* v1, double* v2, int n);
};

class L2Distance2 : public DistanceBase
{
public:

	inline double Distance(double* v1, double* v2, int n)
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
};



