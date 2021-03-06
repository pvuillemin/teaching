#include "doublevector.h"

doubleVector::doubleVector(int size):m_size(size)
{
	data = new double[size];
}

doubleVector::~doubleVector()
{
	delete[] data;
}

doubleVector::doubleVector(const doubleVector &v)
{
	m_size = v.m_size;

	if (data != 0)
		delete[] data;

	for(int i = 0; i < m_size; i++)
		data[ i ] = v.data[ i ];

}


doubleVector& doubleVector::operator=(const doubleVector &v)
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


double & doubleVector::operator[](int i)
{
	return data[ i ];
}

int doubleVector::getSize()
{
	return m_size;
}
