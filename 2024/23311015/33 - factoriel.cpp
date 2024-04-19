#include<iostream>
using namespace std;
int main()
{
    int n;
    int pro = 1;
    cout << "Eneter max number: " << endl;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        pro = pro*i;
    }
    cout << pro << endl;
    return 0;
}