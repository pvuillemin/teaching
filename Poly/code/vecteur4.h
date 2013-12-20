class Vector
{
	public:
		Vector(unsigned int n);
		~Vector();

		/*assignment operator*/
		Vector& operator=(const Vector &v);
		/*Copy-Constructor*/
		Vector(const Vector &v);

		/*operateur []*/
		double & operator[](unsigned int i);

		unsigned int GetLength();

	private:
		unsigned int _length;
		double* _data;
};
