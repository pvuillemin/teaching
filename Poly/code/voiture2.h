#ifndef CAR_H
#define CAR_H
#include "Vehicule2.h"

class Car : public Vehicule
{
    public:
        Car(int state = 1, int fuel = 100, int color = 0, int prix = 10000);
        ~Car();

        void SetFuel(int fuel);
        int GetFuel();

    private:
        int _fuel;
};

#endif

