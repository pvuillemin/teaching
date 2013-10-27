#include <iostream.h>

int main()
{								
	//entier
	int n = 0;
	int &r = n;
	
	cout << r; //r = 0
	n++;  
	cout << r;// r= 1
	r++;
	cout << n; //n=2								
	return 0;
}

