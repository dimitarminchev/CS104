<<<<<<< HEAD
// 17. Числа на Фибоначи
=======
// 17. Фибоначи
>>>>>>> 8ba5b380dbc55f048909278a5811c45a5c8d985a
#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    int n;
    cin >> n;
    int a = 1, b = 1, c = a + b;
<<<<<<< HEAD
    cout << a << " " << b << " " << c << " ";
=======
    cout << a << " " << b << " " << c << " "; 
>>>>>>> 8ba5b380dbc55f048909278a5811c45a5c8d985a
    while(c<n)
    {
      a = b;
      b = c;
      c = a + b;
      if(c < n) cout << c << " ";
    }
    return 0;
<<<<<<< HEAD
    }
=======
}
>>>>>>> 8ba5b380dbc55f048909278a5811c45a5c8d985a
