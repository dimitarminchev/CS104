#include<iostream>
using namespace std;
int main()
{
    // Declare 3 variables for integer numbers
    int a, a1, a2, a3;


    // User interface (UI/UX)
    cout << "Please enter 3 digits numbers: " << endl;
    cin >> a;
    // Solve the task
    a1 = a % 10;
    a2 = (a / 10) % 10;
    a3 = a / 100;
    
    //Print
    cout << a1 << a2 <<a3;
   
    return 0;

}
