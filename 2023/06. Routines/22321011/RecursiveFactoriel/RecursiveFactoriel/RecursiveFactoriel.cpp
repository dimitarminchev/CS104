#include <iostream>
using namespace std;

// Recursive function to find factorial
double fak(int n)
{
    if (n == 1) return 1;
    else return n * fak(n - 1);
}

// Main function
int main()
{

    cout << "10!=" << fak(10) << endl;
    return 0;
}