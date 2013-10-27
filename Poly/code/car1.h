#ifndef CAR_H
#define CAR_H

class Car
{
    public :
        Car(int state, int fuel, int color, int price);
        ~Car();

        void SetState(int state);
        int GetState(void);
        void SetFuel(int fuel);
        int GetFuel(void);
        void SetColor(int color);
        int GetColor(void);
        int GetPrice(void);
        void SetPrice(int);
        
    private:
        int _state; //is it second hand or new?
        int _fuel; // fuel remaining
        int _color;
        int _price;
};

#endif