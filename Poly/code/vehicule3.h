#ifndef VEHICULE_H
#define VEHICULE_H

class Vehicule
{
    public :
        Vehicule(int state = 1, 
			int color = 0, 
			int price = 10000);
        ~Vehicule();

        void SetState(int state);
        int GetState();
        void SetColor(int color);
        int GetColor(int color);
        int GetPrice();
        void SetPrice(int price);

    protected:
        int _state; //new?
        int _color;
        int _price;

};

#endif