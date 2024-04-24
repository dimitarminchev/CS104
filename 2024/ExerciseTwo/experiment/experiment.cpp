#include<iostream>
using namespace std;
int main()
{
    const int N = 100;
    int A[N];
    int n;
    cout << "n=";
    cin >> n;
    for (int k = 0; k < n; k++) cin >> A[k];
    int p;
    cout << "p=";
    cin >> p;
    for (int k = 0; k < n; k++)
    {
        if (A[k] == p) cout << k << " ";
    }
       return 0;
}