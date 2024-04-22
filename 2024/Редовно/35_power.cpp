#include <iostream>
using namespace std;
int power(int n)
{
    if(n==1) return 2;
    return 2 * power(n-1);
}
int main()
{   
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    cout << "pow(2,n)= " << power(n) << endl;
    return 0;
}