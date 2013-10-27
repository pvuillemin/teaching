class Vecteur
{
	public:
		Vecteur(unsigned int n);
		~Vecteur();

		/*operateur d'egalite*/
		Vecteur& operator=(const Vecteur &v);
		/*constructeur de copie*/
		Vecteur(const Vecteur &v);

		/*operateur pour acceder aux composantes*/
		double & operator[](unsigned int i);

		unsigned int getDimension();

	private:
		unsigned int dimension;
		double *data;
};
