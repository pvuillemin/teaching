#include "Mother.h"
#include <iostream>
using namespace std;

Mother::Mother()
{
	cout << "Default mother constructor called \n";
}

Mother::Mother(int id)
{
	_id = id;
	cout << "1-argument mother constructor called \n";
}

Mother::~Mother()
{
	cout << "Mother destructor called \n";
}