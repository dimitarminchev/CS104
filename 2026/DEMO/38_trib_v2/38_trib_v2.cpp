#include <iostream>
#include <vector>
using namespace std;
int main()
{
    const int N = 1000;

    // Създавме колекция от целочислени елементи
    vector<double> trib;
    trib.push_back(1);
    trib.push_back(1);
    trib.push_back(1);

    // Намиране на останалите числа от редицата до 10
    for (int k = 3; k < N; k++)
    {
        // trib[k] = trib[k - 3] + trib[k - 2] + trib[k - 1];
        trib.push_back( trib[k - 3] + trib[k - 2] + trib[k - 1] );
    }

    // Отпечатваме редицата на Трибуначи
    for (int k = 0; k < N; k++)
    {
        cout << trib[k] << " ";
    }
}
