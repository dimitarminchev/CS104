#include <iostream>
using namespace std;
int main()
{
    int start, end, count = 0;
    cin >> start >> end;

    for (int i = start; i < end; i++)
    {
        int a = (i / 100) % 10;
        int b = (i / 10) % 10;
        int c = (i / 1) % 10;

        // Проверка за аритметична прогресия
        if (a - b == b - c || a - b == (-1) * (b - c))
        {
            count++;
        }
    }
    //Броя на числата
    cout << count << endl;

    return 0;
}