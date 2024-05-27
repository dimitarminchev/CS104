#include <iostream>
using namespace std;
int main()
{
    int num;
    float sum = 0;
    cin >> num;
    for(int i = 0; i < 8; i++)
    {
        sum = sum + (num % 10);
        num = num / 10;
    }
    cout << sum / 8;
    return 0;
}
