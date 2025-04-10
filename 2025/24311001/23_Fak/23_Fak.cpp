#include <iostream>
using namespace std;
int main()
{

    int n, sum = 1;
    cout << "n=";
    cin >> n;

    for (int k = 1; k <= n; k++)
    {

        sum = sum * k;

    }

    cout << "sum=" << sum << endl;





    return 0;
}
