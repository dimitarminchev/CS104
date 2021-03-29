// 4. Изведете редицата: Аn = 1/n

#include <iostream>
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
        float Ab = 1.0 / a;
        cout << Ab << endl;
    }

    return 0;
}