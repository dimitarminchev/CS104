#include<iostream>
#include<cmath>
using namespace std;
int main() 
{
    int n, sum = 4, pro = 2;
    cin >> n;
    int a = 1, b = 1, c = a + b;


    while(c<n)
    {
      a = b;
      b = c;
      c = a + b;
      if(c < n) 
      {
        sum += c;
        pro *= c;
      }
    }

    cout << pro << " " <<  sum << endl;

    return 0;
}
