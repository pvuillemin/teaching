class doubleVector
{
    public:
        doubleVector(int size);
        ~doubleVector();

        /*constructeur de copie*/
        doubleVector(const doubleVector &);
        /*operateur d'egalite*/
        doubleVector& operator=(const doubleVector &);

        /*pour acceder aux elements*/
        double & operator[](int i);
	int getSize();

    private:
        int m_size;
        double *data;
};
