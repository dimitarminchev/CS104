#include<iostream>
using namespace std;
int power(int n)
{   
    if(n==1) return 2;
    else return 2 * power(n-1);
}
int main()
{
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "2 to the power of " << n << " = " << power(n) << endl;

    return 0;
}