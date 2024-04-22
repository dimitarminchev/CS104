#include<iostream>
#include<cmath>
using namespace std;
int pow(int n)
{
    if (n==1) return 2;
    return 2 * pow(n-1);
}
int main()
{
   int n;
   cout << "Enter n: " << endl;
   cin >> n;
   cout << pow(n) << endl;
   return 0;

}