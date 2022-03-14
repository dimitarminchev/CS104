#include <iostream>
using namespace std;
int main()
{
    int n, A[100];
    int index = 0;
    while (cin >> n)
    {
        A[index] = n;
        index++;
    }
    int c_max = 0, c_item = 0;
    int max = A[0], item = A[0];
    for (int i = 1; i < index; i++)
    {
        if (A[i] == A[i - 1])
        {
            c_max++;
            c_item = A[i];
        }
        else if (c_max > max)
        {
            max = c_max;
            item = c_item;
            c_max = 0;
            c_item = 0;
        }
    }
    cout << max << endl;
    return 0;
}