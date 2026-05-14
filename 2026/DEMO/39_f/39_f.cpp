#include <iostream> // cout, cin
#include <cmath> // pow
using namespace std;
int main()
{
    const int N = 1000; // максимален брой на елементите
    int F[N+1]; // цялочислен масив
    float sum = 0;

    // Вувеждаме параметри за намиране на сумата
    int n, x;
    cout << "x="; 
    cin >> x;
    cout << "n=";
    cin >> n;

    // Намираме елементите на масива
    for (int k = 1; k <= n; k++)
    {
        F[k] = pow(x, k);
        sum += F[k];
    }

    cout << "sum=" << sum << endl;
    return 0;
}
