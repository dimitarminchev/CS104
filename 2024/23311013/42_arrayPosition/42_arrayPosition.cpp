#include <iostream>
#include <cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n;
    print("n: ");
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < (n - 1 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) print(a[i] << " ");

    return 0;
}