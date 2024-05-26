#include<iostream>
#include<cmath>

using namespace std;

    int main() 
{
     
      int x, n;
      int sum = 0;

        cout << "Въведи число x: ";
        cin >> x;

        cout << "Въведи число k: ";
        cin >> n;

    for (int k = 1; k <= n; ++k) 
  {
      sum += ( pow ((-1), k) * pow (x, k));
  }
    
      cout << "Сумата = " << sum << endl;
      return 0;
}
