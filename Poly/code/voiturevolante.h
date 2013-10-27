#include "voiture4.h"
#include "avion4.h"

class FlyingCar : public Car, public FlyingVehicle
{
	public:
		FlyingCar();
		~FlyingCar();
}
