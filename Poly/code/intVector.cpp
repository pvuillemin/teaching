#include "intvector.h"

intVector::intVector(int size):m_size(size)
{
	data = new int[size];
}

intVector::~intVector()
{
	delete[] data;
}

intVector::intVector(const intVector &v)
{
	m_size = v.m_size;

	if (data != 0)
		delete[] data;

	for(int i = 0; i < m_size; i++)
		data[ i ] = v.data[ i ];

}


intVector& intVector::operator=(const intVector &v)
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


int & intVector::operator[](int i)
{
	return data[ i ];
}

int intVector::getSize()
{
	return m_size;
}
