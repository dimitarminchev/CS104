#include <iostream>
using namespace std;
int main()
{
    int next, A[100], index = 0;

    // Input
    while (cin >> next)
    {
        A[index] = next;
        index++;
    }

    // Longset Side
    int current_max = 0, current_item = 0;
    int max = A[0], item = A[0];
    for (int i = 1; i < index; i++)
    {
        if (A[i] == A[i - 1])
        {
            current_max++;
            current_item = A[i];
        }
        else if(current_max > max)
        {
            max = current_max;
            item = current_item;
            current_max = 0;
            current_item = 0;
        }
    }

    // Print
    // cout << item << " = " << max << endl;
    cout << max << endl;

    return 0;
}
