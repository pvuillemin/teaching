#include <iostream.h>

int main()
{
   int n;

   cout << "Give a size for the array : ";
   cin >> n;

   int* someAnswer = new int[n];

   for(int i=0 ; i<n ; i++)
      cin >> someAnswer[i];
   for(int i=0 ; i<n ; i++)
      cout << someAnswer[i];

   delete[] someAnswer;

   return 0;
}
