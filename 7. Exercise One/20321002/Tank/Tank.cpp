
#include <iostream>
using namespace std;
int main()
{
    int V;
    cout << "V=";
    cin >> V;
    int total = V / (2 + 3);
    int remain = V % (2 + 3);
    cout << total << " times both buckets. ";
    switch (remain)
    {
    case 1: cout << "1 litre remaining, we can use the 2 litres bucket"; break;
    case 2: cout << "2 litres remaining, we can use the 2 litres bucket"; break;
    case 3: cout << "1 litre remaining, we can use the 3 litres bucket"; break;
    case 4: cout << "4 litres remaining, we can use twice the 2 litres bucket"; break;
    }
    return 0;
}
