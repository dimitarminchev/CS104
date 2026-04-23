#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float Ax, Ay, Ar, Bx, By, Br;
	cout << "Enter cicle A (x,y,r): " << endl;
	cin >> Ax >> Ay >> Ar;
	cout << "Enter cicle B (x,y,r): " << endl;
	cin >> Bx >> By >> Br; 


	float d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

	if (d > Ar + Br)
	{
		cout << "Circles have NO common point of intercept" << endl;
	}
	else if (d == Ar + Br)
	{
		cout << "Circles have ONE common point of intercept" << endl;
	}
	else if (d < Ar + Br)
	{
		cout << "Circles have TWO common points of intercept" << endl;
	}
	return 0;
}