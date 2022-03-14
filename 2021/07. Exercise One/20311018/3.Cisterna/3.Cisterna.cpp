#include <iostream>
using namespace std;
int main()
{
    int v;
    cout << "Enter the volume: ";
    cin >> v;
    int bucket1 = 2; int bucket2 = 3;
    int buckets = bucket1 + bucket2;
    int filling = v / buckets;
    int ostatyk;
    if (v % buckets != 0)
    {
        ostatyk = v % buckets;
        if (ostatyk == 4)
        {
            cout << filling << " times both buckets and 2 times bucket with 2 litres.";
            return 0;
        }
        else if (ostatyk == 3)
        {
            cout << filling << "times both buckets and 1 time bucket with 3 litres.";
            return 0;
        }
        else if (ostatyk == 2)
        {
            cout << filling << "times both buckets and 1 time bucket with 2 litres.";
            return 0;
        }
        else if (ostatyk == 1)
        {
            cout << filling << "times both buckets and there is 1 litre left to fill.";
            return 0;
        }
    }
    if (v % buckets == 0)
    {
        cout << filling << " times both buckets.";
        return 0;
    }
}