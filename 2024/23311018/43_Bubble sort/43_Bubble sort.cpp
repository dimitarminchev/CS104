#include <iostream>
using std::cout;
using std::cin;
using std::endl;
int main()
{
    int n, curNum;
    cout << "n:";
    cin >> n;
    int a[100];
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; i < (n - 1 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                curNum = a[j];
                a[j] = a[j + 1];
                a[j + 1] = curNum;
            }
        }
    }
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    return 0;
}