#include<iostream>

using namespace std;

int main()
{
    unsigned int upTo;
    unsigned int naturalNumbersResult = 1;

    cout << "Sir, up to which number of natural numbers you are looking the result of?" << endl;
    cin >> upTo;

    for (unsigned int i = 1; i < upTo; i++)
    {
        if (upTo % i == 0) 
        {
            naturalNumbersResult += i;
        }
    }

    cout << "Sir, the result of natural numbers is " << naturalNumbersResult << endl;

    return 0;
}