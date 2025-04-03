#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter 4 digit number:" << endl;
    cin >> n;

    int a = (n / 1000) % 10;
    int b = (n / 100) % 10;
    int c = (n / 10) % 10;
    int d = (n / 1) % 10;

    int s = a + b + c + d;
    int p = a * b * c * d;

    cout << s << " " << p <<  endl;
    return 0;
}