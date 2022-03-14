#include <iostream>
using namespace std;
#include "rational.h"
int main()
{
	rational A(1,2);
	rational B(1,3);

	rational C = A + B;
	rational D = A - B;
	rational E = A * B;
	rational F = A / B;

	A.print();
	cout << " + ";
	B.print();
	cout << " = ";
	C.print();
	cout << endl;

	A.print();
	cout << " - ";
	B.print();
	cout << " = ";
	D.print();
	cout << endl;

	A.print();
	cout << " * ";
	B.print();
	cout << " = ";
	E.print();
	cout << endl;

	A.print();
	cout << " / ";
	B.print();
	cout << " = ";
	F.print();
	cout << endl;

	return 0;
}