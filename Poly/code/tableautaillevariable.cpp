#include <iostream.h>


int main()
{
   int n, i;
   int* someArray = NULL;

   cout << "Give a size for the array : ";
   cin >> n;

   someArray = new int [ n ];

   for(i=0 ; i<n ; i++)
      cin >> someArray [ i ];
   for(i=0 ; i<n ; i++)
      cout << someArray [ i ];

   /*warning, something missing*/
   return 0;
}
