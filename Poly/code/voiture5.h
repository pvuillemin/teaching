#include "vehicule5.h"

class Car : public virtual Vehicle
{
    public:
        Car(int state = 1, int fuel = 100, 
		int color = 0, int price = 10000);
        ~Car();

        void SetFuel(int fuel);
        int GetFuel();

    private:
        int _fuel;
};

