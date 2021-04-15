// 7. Improvement Circles.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float Ax, Ay, Ar, Bx, By, Br, Cx, Cy, Cr, Dx, Dy, Dr;

	cout << "Enter first circle [x y r]: " << endl;
	cin >> Ax >> Ay >> Ar;
	cout << "Enter second circle [x y r]: " << endl;
	cin >> Bx >> By >> Br;
	cout << "Enter third circle [x y r]: " << endl;
	cin >> Cx >> Cy >> Cr;
	cout << "Enter fourth circle [x y r]: " << endl;
	cin >> Dx >> Dy >> Dr;

	float d = sqrt(pow(Ax - Bx - Cx - Dx), 2) + pow((Ay - By - Cy - Dy), 2));

	if (Ar + Br + Cr + Dr < d) cout << "No interaction points" << endl;
	if (Ar + Br + Cr + Dr == d) cout << "One interaction point" << endl;
	if (Ar + Br + Cr + Dr > d) cout << "Two interaction points" << endl;

	return 0;
}