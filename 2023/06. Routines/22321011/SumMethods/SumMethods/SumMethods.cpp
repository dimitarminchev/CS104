#include <iostream>
using namespace std;

/// <summary>
/// A function to add two numbers
/// </summary>
/// <param name="a">Integer</param>
/// <param name="b">Integer</param>
/// <returns>Integer</returns>
int sum(int a = 1, int b = 2)
{
    return a + b;
}

/// <summary>
/// A function to add two numbers
/// </summary>
/// <param name="a">A floating point number</param>
/// <param name="b">A floating point number</param>
/// <returns>A floating point number</returns>
double sum(double a, double b)
{
    return a + b;
}

// Main function of the program
int main()
{
    // We execute the method with integers
    cout << sum() << endl;
    cout << sum(2) << endl;
    cout << sum(2, 3) << endl;

    // We execute the method with floating point numbers
    cout << sum(1.2, 2.1) << endl;

    return 0;
}