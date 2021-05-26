#include <iostream>

#include "rational.h"

using namespace std;

int main()
{
    rational A(1, 4);

    rational B(2, 6);

    rational C = A + B;

    A.print();
    cout << " + ";

    B.print();
    cout << " = ";

    C.print();
    cout << endl;

    return 0;
}