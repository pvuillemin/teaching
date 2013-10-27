
struct Complexe
{
    Complexe(double _reel, double _imag);
    ~Complexe();

    double reel, imag;
    double module();
    double getReel();
    void setReel(double _reel);
    double getImag();
    void setImag(double _imag);

};


