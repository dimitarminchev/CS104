#include <iostream>
#define print(x) std::cout<<x<<std::endl;
using namespace std;

int main()
{
    int number, reverseNumber = 0, remainder;

    print("Enter a number: ");
    cin >> number;

    while (number != 0) {
        remainder = number % 10;

        reverseNumber = reverseNumber * 10 + remainder;

        number /= 10;
    }

    print("Reversed integer: " << reverseNumber);

    return 0;
}