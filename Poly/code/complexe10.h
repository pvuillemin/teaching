class Complexe
{
    public:
        Complexe();
        Complexe(double _rho, double _theta );
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
