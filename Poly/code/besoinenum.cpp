#include <iostream.h>

const int small = 0;
const int medium = 1;
const int large = 2;

void f(int size)
{
	if (size == small)
		cout <<"small";
}


int main()
{
	f(small);
}
