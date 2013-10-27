#ifndef BIKE_H
#define BIKE_H

class Bike
{
    public :
        Bike(int state, int color, int price);
        ~Bike();

        void SetState(int state);
        int GetState(void);
        void SetColor(int color);
        int GetColor(void);
        int GetPrice(void);
        void SetPrice(int);
		
    private:
        int _state; //is it second hand or new?
        int _color;
        int _price;
};

#endif