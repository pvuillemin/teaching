#include <iostream.h>

void incremente(int *i) /*On recupere l'adresse*/
{
    (*i)=(*i)+1;
}

int main()
{
    int n=0;

    cout << n << endl;
    incremente(&n);
    cout << n << endl;

return 0;
}
