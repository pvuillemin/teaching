#include <iostream.h>

int carre(int x)
{
    return x*x;
}

int main()
{
    int i;

    for( i = 0; i <= 100; i++)
    {
        if ( carre(i) >= 100 )
        {
            cout << i << endl;
        }
    }
    return 0;
}

