#include<iostream>
using namespace std;
int main()
{
    float n = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cout << 1.0 / (i * i) << endl;
    }
    return 0;
}
