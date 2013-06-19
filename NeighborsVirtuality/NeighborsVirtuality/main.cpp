#include "DistanceBase.h"
#include "MersenneTwister.h"
#include <time.h> 
#include <iostream>
#include <fstream>
using namespace std;

void bencharkDistanceDynamic(DistanceBase& distance, double** v, int n, int d)
{
	for (int i=0; i < n;i++)
	{
		for (int j=i+1; j<n;j++)
		{
			distance.Distance(v[i], v[j], d);
		}
	}
}

template <class T>
void bencharkDistanceStatic(T& distance, double** v, int n, int d)
{
	for (int i=0; i < n;i++)
	{
		for (int j=i+1; j<n;j++)
		{
			distance.Distance(v[i], v[j], d);
		}
	}
}

void bencharkDistanceDynamic2(DistanceBase& distance, double** v, int n, int d, double** distanceMatrix)
{
	for (int i=0; i < n;i++)
	{
		for (int j=i+1; j<n;j++)
		{
			distanceMatrix[i][j] = distance.Distance(v[i], v[j], d);
		}
	}
}

template <class T>
void bencharkDistanceStatic2(T& distance, double** v, int n, int d, double** distanceMatrix)
{
	for (int i=0; i < n;i++)
	{
		for (int j=i+1; j<n;j++)
		{
			distanceMatrix[i][j] = distance.Distance(v[i], v[j], d);
		}
	}
}


double** GenerateVectors(int n, int d)
{
	double** v = new double*[n];
	for (int i = 0 ; i < n ; i++)
	{
		v[i] = new double[d];
		for (int j=0; j < d;j++)
		{
			v[i][j] = genrand_real1();
		}
	}
	return v;
}

void main()
{
	init_genrand(13);
	int d = 200;
	int n = 10000;
	double** v = GenerateVectors(n,d);
	
	ofstream output;
	output.open ("output.txt");

	L2Distance distance;
	clock_t timer1;
	clock_t timer2;

	double** distanceMatrix = new double*[n];
	for (int i =0 ; i < n ; i++)
	{
		distanceMatrix[i] = new double[n];
	}

	double admissibleValuesFord[7];
	admissibleValuesFord[0] =2;
	admissibleValuesFord[1] = 5;
	admissibleValuesFord[2] = 10;
	admissibleValuesFord[3] = 20;
	admissibleValuesFord[4] = 50;
	admissibleValuesFord[5] = 100;
	admissibleValuesFord[6] = 200;

	for (int j=0 ; j < 10;j++)
	{
		d = admissibleValuesFord[j];

		for (int i = 0 ; i < 100 ; i++)
		{
			timer1 = clock();
			bencharkDistanceDynamic2(distance, v, n, d, distanceMatrix);
			timer2 = clock() - timer1;
			output << "Dynamic, d=" << d << ",Time : \t" <<  ((float) timer2)/CLOCKS_PER_SEC << "\n";
			cout << "Dynamic, d=" << d << ", iteration : " << i <<"\n";
		}
	}

	for (int j=0 ; j < 10;j++)
	{
		d = admissibleValuesFord[j];

		for (int i = 0 ; i < 100 ; i++)
		{
			timer1 = clock();
			bencharkDistanceStatic2<L2Distance>(distance, v, n, d, distanceMatrix);
			timer2 = clock() - timer1;
			output << "Static, d=" << d << ",Time : \t" <<  ((float) timer2)/CLOCKS_PER_SEC << "\n";
			cout << "Static, d=" << d << ", iteration : " << i <<"\n";
		}
	}

	L2Distance2 distance2;
	for (int j=0 ; j < 10;j++)
	{
		d = admissibleValuesFord[j];

		for (int i = 0 ; i < 100 ; i++)
		{
			timer1 = clock();
			bencharkDistanceStatic2<L2Distance2>(distance2, v, n, d, distanceMatrix);
			timer2 = clock() - timer1;
			output << "Static with forced inline, d=" << d << ",Time : \t" <<  ((float) timer2)/CLOCKS_PER_SEC << "\n";
			cout << "Static with forced inline, d=" << d << ", iteration : " << i <<"\n";
		}
	}

	output.close();
	
	for (int i =0 ; i < n ; i++)
	{
		delete[] distanceMatrix[i];
	}
	delete[] distanceMatrix;
	
	for (int i =0 ; i < n ; i++)
	{
		delete[] v[i];
	}
	delete[] v;
}