//14. Изчислете Факториел до зададено число
#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int pro = 1;

    for (int k = 1; k <= n; k++)
    {
        pro = pro + k;
    }
    cout << pro << endl;

    return 0;
}
