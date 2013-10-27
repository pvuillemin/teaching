#include <iostream.h>

/*le signe & indique que
l'on passe par reference*/
void incremente(int &i)
{
	i++;
}


int main()
{
	int n = 0;
	cout << n << endl;
	/*on n'a plus besoin de passer
	l'adresse explicitement*/
	incremente( n );
	cout << n << endl;

	return 0;
}
