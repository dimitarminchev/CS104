#include <iostream>

using namespace std;

int main()
{
    unsigned short int fibonacciUpTo;
    unsigned long int firstNum = 0, secondNum = 1, next;

    cout << "To where we should count fibonacci, sir?" << endl;
    cin >> fibonacciUpTo;

    for (unsigned int i = 0; i < fibonacciUpTo; i++)
    {
        cout << firstNum << " ";

        next = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = next;


        if (firstNum > fibonacciUpTo)
        {
            break;
        }
    }

    return 0;
}