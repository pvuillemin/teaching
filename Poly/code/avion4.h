#include "vehicule4.h"
class FlyingVehicle : public virtual Vehicle
{
	public:
		FlyingVehicle();
		~FlyingVehicle();

		void SetMaxAltitude(int maxAltitude);
		int GetMaxAltitude();
		
	private:
		int _maxAltitude;		
}
