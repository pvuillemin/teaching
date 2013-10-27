#include <iostream.h>

enum Size
{
	SMALL,
	MEDIUM,
	BIG;
}

void f(Size size)
{
	if (size == SMALL)
		cout <<"small";
}


int main()
{
	f(Size.SMALL);
}
