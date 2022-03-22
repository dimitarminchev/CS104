#include <iostream>
using namespace std;
int main()
{
    int peopleCount;

    cout << "Enter players count: ";
    cin >> peopleCount;

    for (int k = 1; k <= peopleCount; k++)
    {
        bool condition1 = k % 7 == 0; 
        bool condition2 = k % 10 == 7;
        bool condition3 = (k / 10) % 10 == 7; 
      
        if (condition1||condition2||condition3)
        {
            cout << "Click "<< endl;
        }
        else
        {
            cout << k << " "<<endl;
        }
    }

    return 0;
}