<<<<<<< HEAD
// 18. Прости числа
=======
// 19.
>>>>>>> 8ba5b380dbc55f048909278a5811c45a5c8d985a
#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
<<<<<<< HEAD
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
      bool isPrime = true;
      for (int j = 2; j < i; j++)
      {
        if(1%j == 0)
        {
          isPrime = false;
        }
      }
    if(isPrime == true) cout << i << " ";
    }
=======
    int x,n;
    cin >> x >> n;  

    for (int k = 1; k <= n; k++)
    { 
      float An = 1.0 / k;
      cout << An << endl;
    }
    
>>>>>>> 8ba5b380dbc55f048909278a5811c45a5c8d985a
    return 0;
}
