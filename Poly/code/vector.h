#ifndef _VECTOR_H
#define _VECTOR_H

template<class T>
class Vector
{
    public:
        Vector(int size);
        ~Vector();

        /*constructeur de copie*/
        Vector(const Vector &);
        /*operateur d'egalite*/
        Vector & operator=(const Vector &);

        /*pour acceder aux elements*/
        T& operator[](int i);
	int getSize();

    private:
        int m_size;
        T *data;
};


template<class T>
Vector<T>::Vector(int size):m_size(size)
{
	data = new T[size];
}

template<class T>
Vector<T>::~Vector()
{
	delete[] data;
}

template<class T>
Vector<T>::Vector(const Vector<T> &v)
{
	m_size = v.m_size;

	if (data != 0)
		delete[] data;

	for(int i = 0; i < m_size; i++)
		data[ i ] = v.data[ i ];

}

template<class T>
Vector<T>& Vector<T>::operator=(const Vector<T> &v)
{
	if (this == &v)
		return (*this);
	
	m_size = v.m_size;
	if (data != 0)
		delete[] data;

	for(int i = 0; i < m_size; i++)
		data[ i ] = v.data[ i ];

	return (*this);
}

template<class T>
T & Vector<T>::operator[](int i)
{
	return data[ i ];
}

template<class T>
int Vector<T>::getSize()
{
	return m_size;
}

#endif
