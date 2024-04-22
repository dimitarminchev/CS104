#include<iostream>
using namespace std;

double fak(double n)
{ 
    if(n==1) return 1;
    else return n*fak(n-1);
}
int main()
{
    double n, k;
    cout << "Eneter n: " << endl;
    cin >> k;
    cout << "Enter k: " << endl;
    cin >> n;
    cout << fak(n) / (fak(k) * fak(n-k)) << endl;
    return 0;
}