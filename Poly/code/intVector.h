class intVector
{
    public:
        intVector(int size);
        ~intVector();

        /*constructeur de copie*/
        intVector(const intVector &);
        /*operateur d'egalite*/
        intVector & operator=(const intVector &);	

        /*pour acceder aux elements*/
        int& operator[](int i);
	int getSize();

    private:
        int m_size;
        int *data;
};
