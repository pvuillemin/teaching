#include "Vector.h"
#include <iostream>
using namespace std;


/*Argument is intentionally passed by value to launch copy-construction*/
double Sum(Vecteur v)
{
	double total = 0;
	unsigned int i;
	
	for(i = 0; i < v.GetLength(); i++)
		total += v[i];

	return total;
}


int main()
{
	Vector v1(5), v2(6);
	
	for(int i = 0; i < v1.GetLength(); i++)
		v1[i] = 3;
	
	/*Assignment, size of v2 is changed*/
	v2 = v1;
	
	cout << Sum(v2);
	
	return 0;
}




