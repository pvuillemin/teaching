#include "complexe4.h"

int main()
{
	Complexe z1(1,2);
	Complexe z2(0,0);

	z2.setReel(2 * z1.getReel() );
	z2.setImag(2 * z2.getImag() );
	return 0;
}

