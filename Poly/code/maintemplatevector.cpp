#include<iostream>
#include "vector.h"
using namespace std;


int main()
{
	int i;
	
	Vector<double> dv(10);
	Vector<int> iv(10);

	for(i=0; i< 10 ; i++)
	{
		dv[i] = i/ double(i+1);
		iv[i] = i;
	}		

	for(i = 0; i < 10; i++)
		cout << iv[i] << " " << dv[i] << endl;

	return 0;	
}
