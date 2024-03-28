#include <iostream>

using namespace std;

int main()
{
    int factorial;
    int factorialResult = 1;

    cout << "Sir, which factorial your are looking for?" << endl;

    cin >> factorial;

    if (factorial == 0)
    {
        cout << "Factorial of 0 is 1, sir" << endl;
    }
    

    for (int i = 1; i <= factorial; i++)
    {
        factorialResult *= i;
    }

    cout << "The result of factorial is " << factorialResult << ", sir." << endl;

    return 0;
}