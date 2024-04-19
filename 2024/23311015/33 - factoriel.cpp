#include<iostream>
using namespace std;
int fak(int n)
{
    if(n==1) return 1;
    else return n*fak(n-1);
}
int main()
{
    int n;
    cout << "Eneter max number: " << endl;
    cin >> n;
    cout << fak(n) << endl;
    return 0;
}