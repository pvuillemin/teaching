struct Complexe
{
    Complexe(double rho, double theta);
    ~Complexe();

    double rho, theta;
    double module();
    double argument();
};
