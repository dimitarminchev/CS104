#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int n,x;
   int sum = 0;
   int f[100] = { 0 } ;
   cout << " please enter n, x " ;
   cin >> n >> x;

   for ( int i=0; i<n; i++)
   cin >> n >> x;

   for (int 1 =0; i<n; i++ )
   {
     f[i] = (pow((x),i+1));
     sum = sum + f[i];

   }
cout << "Sum is:" << sum << endl;
return 0;


}