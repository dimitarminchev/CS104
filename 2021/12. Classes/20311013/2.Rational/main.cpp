#include <iostream>
using namespace std;
#include"rational.h"
int main()
{
    rational A(1,4),B(2,6);
    rational C = A + B;
    A.print();
    cout << " + ";
    B.print();
    cout << " = ";
    C.print();
    cout << endl;

    return 0;
}