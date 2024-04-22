#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
   float x = 2;
   float n = 3;

    cin >> n; 
    cin >> x;     

   float sum = 0;

   for(float i = 1; i <= n;i++)
   {
    sum = sum + pow(x,i);
   }

    cout << sum << endl;

    return 0;
}