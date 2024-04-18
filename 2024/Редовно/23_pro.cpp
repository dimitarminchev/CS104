#include<iostream>
using namespace std;
int main()
{
    int n,pro=1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        pro=pro*i;
    }
    cout << pro << endl;
    return 0;
}
