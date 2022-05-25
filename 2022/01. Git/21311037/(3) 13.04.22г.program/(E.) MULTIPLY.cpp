#include <iostream>
using namespace std;
int main()
{
    int first, second, sum = 0;
    cin >> first >> second;
    cout << first << " " << second << endl;
    if (first % 2 != 0) sum += second;

    while (first > 1)
    {
        first /= 2;
        second *= 2;
        if (first % 2 != 0) sum += second;
        cout << first << " " << second << endl;
    }
    
    cout << sum << endl;
    return 0;
}