class Complexe
{
    public:
        Complexe(double _rho = 0, double _theta = 0);
        ~Complexe();

        double module();
        double getReel();
        void setReel(double _reel);
        double getImag();
        void setImag(double _imag);
        double getArgument();

    private:
        double rho, theta;

};
