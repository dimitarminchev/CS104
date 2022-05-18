#include <iostream>
using namespace std;
int fak(int n)
{
    if (n <= 1) return 1;
    else return n * fak(n - 1);
}

int main()
{
    cout << "5!=" << fak(5) << endl;
    return 0;
}