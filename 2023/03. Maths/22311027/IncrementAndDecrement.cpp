#include <iostream>

using namespace std;

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    cout << num1 + 1 << endl;
    cout << num1++ << endl;
    cout << ++num2 << endl;

    cout << num1 - 1 << endl;
    cout << num1-- << endl;
    cout << --num2 << endl;

	return 0;
}
