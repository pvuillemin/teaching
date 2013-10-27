class Complexe
{
    public:
        Complexe(double _rho, double _theta);
        ~Complexe();

        double module();
        double getReel();
        void setReel(double _reel);
        double getImag();
        void setImag(double _imag);
        double getArgument();

	static void afficheCompteur();

    private:
        double rho, theta;
	static unsigned int compteur;

};
