#include <iostream>
using namespace std;
int main()

{
    int n;
    cout << "Please enter 6 digit number:" << endl;
    cin >> n;

    int a = (n / 100000) % 10;
    int b = (n / 1000) % 10;
    int c = (n / 10) % 10;

    int p = a * b * c;
    cout << p << endl;
    return 0;
}