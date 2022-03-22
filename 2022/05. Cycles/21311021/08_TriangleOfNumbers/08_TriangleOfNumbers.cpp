#include <iostream>
using namespace std;
int main()
{
    int num;

    cin >> num;

    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}