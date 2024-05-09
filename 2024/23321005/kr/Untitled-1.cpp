#include<iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "n=";
    cin >> n;
    cout << ""x=";
    cin >> x;

    double f = 0
    
    for (int k = 1; k<= n; k++)
    {
        f = f + pow((-1),(k + 1)) * ((pow(2, (2 * k - 1))) / (2 * k - 1));

    }

    cout << f << endl;
    return 0;