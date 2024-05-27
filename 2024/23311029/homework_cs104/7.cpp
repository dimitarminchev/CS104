#include <iostream>
using namespace std;
int main()
{
    float num;
    cin >> num;
    int finalnum = (num * 100);
    cout << finalnum % 10;
    return 0;
}