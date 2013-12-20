#include "vector4.h"

Vector::Vector(unsigned int n) : _length(n)
{
	_data = new double[n];
}

Vector::~Vector()
{
	delete[] _data;
}

unsigned int Vector::GetLength()
{
	return _length;
}


Vector& Vector::operator=(const Vector &v)
{
	if (&v ==  this)
		return (*this);
		
	_length = v._length;
	if (_data !=  0)
		delete[] _data;

	_data = new double [_length];
	for(int i = 0; i < _length ; i++)
		_data[ i ] = v._data[ i ];
	
	return (*this);	
}

Vector::Vector(const Vector &v)
{
	_length = v._length;
	
	if (_data != 0)
		delete[] _data;
	
	_data = new double [_length];
	for(int i = 0; i < _length ; i++)
		_data[ i ] = v._data[ i ];	
}

double & Vector::operator[](unsigned int i)
{
	return _data[ i ];
}
