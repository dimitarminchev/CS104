#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cin >> num1 >> num2;
    for (int i = num1; i <= num2; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
