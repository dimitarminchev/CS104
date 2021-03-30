// 6. Изведете редицата: An = (1 + (1/n))^n
#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    // Променливи
    int n;


    // Въвеждане на горна граница
    cout << "Upper Limit: ";
    cin >> n;


    // Изчисления 
    for (int a = 1; a <= n; a++)
    {
        float Ab = pow((1.0 + (1.0 / a)),2);
        cout << Ab << endl;
    }

    return 0;

}