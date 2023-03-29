#include <iostream>
using namespace std;
int main()
{
    // Програма за пресмятане на факториел
    int n = 5, fak = 1, pro = 1;

    while (fak <= n)
    {
        pro = pro * fak;
        fak = fak + 1;
    }
    cout << n << "!=" << pro << endl;
    return 0;

}