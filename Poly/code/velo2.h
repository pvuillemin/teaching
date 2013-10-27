#ifndef BIKE_H
#define BIKE_H
#include "vehicule2.h"

class Bike : public Vehicule
{
    public:
        Bike(int etat = 1, bool isPadlocked = false, int color = 0, int price = 10000);
        ~Bike();

        bool GetIsPadlocked();
        void SetIsPadlocked(bool isPadlocked);

    private:
        bool _isPadlocked;
};
#endif