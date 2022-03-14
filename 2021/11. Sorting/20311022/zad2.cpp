
#include <iostream>
using namespace std;

int main()
{

    int a[5];
    for (int i = 0; i < 5; i++)
        cin >> a[i];

    int max_count = 0;

    for (int i = 0; i < 5; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 5; j++)
            if (a[i] == a[j])
                count++;
        if (count > max_count)
            max_count = count;
    }

    for (int i = 0; i < 5; i++)
    {
        int count = 1;
        for (int j = i + 1; j < 5; j++)
            if (a[i] == a[j])
                count++;
        if (count == max_count)
            cout << a[i] + 1 << endl;
    }
    return 0;
}