#include<iostream>
using namespace std;
int main()
{
    int n, pro = 1;
    cin >> n;

    for (int k = 1; k <= n; k++)
    {
        pro = pro * k;
    }

    cout << pro << endl;
    return 0;
}