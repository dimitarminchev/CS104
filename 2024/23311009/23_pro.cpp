#include <iostream>
#include <cmath>
using namespace std;
    int main()
{
        int n;
        cout << "Задай до кое число да сметнем произведението" << endl;
        cin >> n;
        
        int pro = 1;

        for (int k = 1; k <= n; k++)
        {
            pro = pro * k;
        }

        cout << pro << endl;

        return 0;
}      