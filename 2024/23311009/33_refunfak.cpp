#include <iostream>
using namespace std;

double fak(int n)

{
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fak(n - 1);
    }
}

int main()
{
    int n;

    cout << " Enter max number  ";
    cin >> n;
    cout << n << "! = " << fak(n) << endl;

    return 0;
}
