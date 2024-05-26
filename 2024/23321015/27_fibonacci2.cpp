#include <iostream>
using namespace std;

void fibonacci(int n)
{
    int a = 0, b = 1;


    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    cout << endl;
}

int main()
{
    int n;
    cout << "n= ";
    cin >> n;
    fibonacci(n);

    return 0;
}