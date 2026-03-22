#include<iostream>
using namespace std;

int main()
{
    for (int i = 1; i < 100; i++)
    {
        int first_digit = i / 10;
        int second_digit = i % 10;
        if (first_digit == 7 || second_digit == 7)
        {
            cout << "Click ";
        }
        else
        {
            cout << i << " ";
        }
    }
    
    return 0;
}
