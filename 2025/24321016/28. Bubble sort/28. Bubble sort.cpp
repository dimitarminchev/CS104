#include <iostream>
using namespace std;

int main()
{
    int a[10] = { 1, -1, 2,-2,3,-3,4,-4,5,-5 };

    for (int k = 0; k < 10; k++) cout << a[k] << " ";
    cout << endl;

    for (int i = 0; i < 10;i++)
        for (int j = 0; j < 10;j++)
        if (a[i]< a[j])
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }


    for (int k = 0; k < 10; k++) cout << a[k] << " ";
    cout << endl;

    return 0;
}
