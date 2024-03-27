#include <iostream>

using namespace std;

int main()
{
    int factorial;
    int factorialResult = 1;
    int currentIteration = 1;

    cout << "Sir, which factorial your are looking for?" << endl;
    cin >> factorial;

    do
    {
        factorialResult *= currentIteration;

        currentIteration += 1;
    } while (currentIteration <= factorial);


    cout << "The result of factorial is " << factorialResult << ", sir." << endl;

    return 0;
}