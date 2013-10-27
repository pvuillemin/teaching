#include "Child.h"
#include <iostream>
using namespace std;

Child::Child(int id) : Mother(id)
{
	cout << "Child empty constructor called \n";
}

Child::~Child()
{
	cout << "Child destructor called \n";
}