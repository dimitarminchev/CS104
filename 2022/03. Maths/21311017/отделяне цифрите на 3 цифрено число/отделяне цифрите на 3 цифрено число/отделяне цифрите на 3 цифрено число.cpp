

#include <iostream>
using namespace std;
int main()
{
    int A = 256;
    int A1 = (A / 100) % 10;
    int A2 = (A / 10) % 10;
    int A3 = (A / 1) % 10;
    cout << A3 << A2 << A1 << endl;
    return 0;
}


