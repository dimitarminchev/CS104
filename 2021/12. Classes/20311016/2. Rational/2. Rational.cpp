#include <iostream>
#include "rational.h"

int main()
{
    rational A(1, 4), B(2, 6);
    rational C = A + B;

    A.print();
    std::cout << " + ";

    B.print();
    std::cout << " = ";

    C.print();
}