template <typename T>
class Vector<T>
{
	Vector<T>::Vector<T>(int size):m_size(size)
	{
		data = new T[size];
	}

	Vector<T>::~Vector<T>()
	{
		delete[] data;
	}

	Vector<T>::Vector<T>(const Vector<T> &v)
	{
		m_size = v.m_size;

		if (data != 0)
		{
			delete[] data;
		}
		
		data= new T[m_size];

		for(int i = 0; i < m_size; i++)
			data[ i ] = v.data[ i ];

	}

	Vector<T>& Vector<T>::operator=(const Vector<T> &v)
	{
		if (this == &v)
			return (*this);
	
		m_size = v.m_size;
		if (data != 0)
			delete[] data;

		data= new T[m_size];

		for(int i = 0; i < m_size; i++)
			data[ i ] = v.data[ i ];

		return (*this);
	}

	T & Vector<T>::operator[](int i)
	{
		return data[ i ];
	}

	int Vector<T>::getSize()
	{
		return m_size;
	}

private:
	unsigned int m_size;
	T* data;
};
