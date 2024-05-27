#include <iostream>
using namespace std;
int main()
{
    float num;
    int first, second, third, fourth;
    cin >> num;
    first = num * 10;
    second = num * 100;
    third = num * 1000;
    fourth = num * 10000;
    cout << (first % 10) + (second % 10) + (third % 10) + (fourth % 10);
    return 0;
}
