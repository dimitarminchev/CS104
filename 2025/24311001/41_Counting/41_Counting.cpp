#include <iostream>
using namespace std;
int main()
{
    int A[100], count = 0;
    int x;
    cout << "x=";
    cin >> x;
    for (int i = 0; i < 10; i++)
    {

        cin >> A[i];
        if (A[i] == x) count++;
        
    }
    cout << "Count:" << count;



    return 0;
}
