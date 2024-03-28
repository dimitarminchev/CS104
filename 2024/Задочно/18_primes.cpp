<<<<<<< HEAD
// 18. Прости числа
=======
// 18. Primes
>>>>>>> 8ba5b380dbc55f048909278a5811c45a5c8d985a
#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    int n;
<<<<<<< HEAD
    cin >> n;
=======
    cin >> n;  
>>>>>>> 8ba5b380dbc55f048909278a5811c45a5c8d985a
    for (int i = 2; i <= n; i++)
    {
      bool isPrime = true;
      for (int j = 2; j < i; j++)
      {
<<<<<<< HEAD
        if(1%j == 0)
=======
        if(i%j == 0)
>>>>>>> 8ba5b380dbc55f048909278a5811c45a5c8d985a
        {
          isPrime = false;
        }
      }
<<<<<<< HEAD
    if(isPrime == true) cout << i << " ";
    }
=======
      if(isPrime == true) cout << i << " ";
    }   
>>>>>>> 8ba5b380dbc55f048909278a5811c45a5c8d985a
    return 0;
}
