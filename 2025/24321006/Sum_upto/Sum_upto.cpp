

#include <iostream>
using namespace std;
int main()
{ 
    int n;
    cout << "n=";
    cin >> n;

    int sum = 0;
    for (int k = 1;k <= n;k++)
    {
        sum = sum + k;
    }

    cout << "sum=" << sum << endl;
    return 0;
}

