#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
   float x = 1;
   float n = 4;
   cout << "input n" << endl;;
   cin >> n; 
   cout << "input x" << endl;;
   cin >> x;     

   

   float sum = 0;

   for(float i = 1; i <= n;i++)
   {
    sum = (sum + (pow((-1),i) * pow(x,i)));
   }
    cout << sum << endl;
    return 0;
}