#include <iostream>
using namespace std;
int main ()
{
    // array
    int A [10] = {2,2,-1,-1,-1,3,5,-2,-2,4};

    //counter of numbers
    int counter = 0, x;
    cout << "x=";
    cin >> x;

    //blablablablebleble
    for (int k = 0; k < 10; k++)
    {
        if (A[k] == x) counter++;
        cout << A[k] << " ";

    }
    cout << endl << "Count: " << counter << endl;

    return 0;
}