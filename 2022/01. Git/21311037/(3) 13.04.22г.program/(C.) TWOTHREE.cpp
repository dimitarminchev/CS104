#include <iostream>
using namespace std;
int main()
{
    int start, br = 0;
    cin >> start;

    while (start > 1)
    {
        if (start % 2 == 0) start /= 2;
        else if (start % 3 == 0) start /= 3;
        else start++;
        cout << start << " ";
        br++;
    }
    cout << endl << br << endl;
    
    return 0;
}