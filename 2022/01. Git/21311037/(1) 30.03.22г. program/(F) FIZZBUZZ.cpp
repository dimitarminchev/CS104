#include <iostream>
using namespace std;
int main()
{
    int start, finish;
    cin >> start >> finish;

    int count = 0;

    for (int k = start; k <= finish; k++)
    {
        if (k % 15 == 0) cout << "fizzbuzz ";
        else if (k % 3 == 0) cout << "fizz ";
        else if (k % 5 == 0) cout << "buzz ";
        else cout << k << " ";
    }
    cout << endl;

    return 0;
}