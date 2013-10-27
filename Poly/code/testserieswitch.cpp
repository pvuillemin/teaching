#include <iostream.h>

int main()
{
	char c;

	cout << "Veuillez entrer un caractere" << endl;
	cin  >> c;

	switch (c)
	{
		case 'A':
			cout << "Lettre A";
			break;
		
		case 'B':
			cout << "Lettre B";
			break;

		case 'C':
			cout << "Lettre C";
			break;
		
		default:
			cout << "Autre lettre";
			break;
	}
	return 0;
}
