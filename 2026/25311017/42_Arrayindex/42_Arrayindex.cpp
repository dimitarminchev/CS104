#include <iostream>
using namespace std;

int main()
{
    int A[10] = { 2,2,-1,-1,-1,3,5,-2,-2,4 };
    int x, none = -1;
    for (int i = 0; i < 10; i++) cout << A[i] << " ";
    cout << endl << "x=";
    cin >> x;
    cout << "Indexes: " << endl;
    for (int i = 0; i < 10; i++)
    {
        if (A[i] == x)
        {
            cout << i << endl;
            none = i;
        }
    }
    if (none == -1) cout << "None" << endl;
    return 0;
}