#include <iostream>
using namespace std;
double fak(int n)
{
    if ( n == 1) 
        return 1;
    else return n * fak(n - 1);
    }
int main()
{
    double n,k;

    cout << "n= ";
    cin >> n;
  
    cout << "k= ";
    cin >> k;
  
    cout << fak(n) / (fak(k) * fak(n-k)) << endl;

    return 0;
}
