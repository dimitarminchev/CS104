// 17_CircleCoordinates.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float Ax, Ay, Ar, Bx, By, Br, Cx, Cy, Dx, Dy, a, h;
	cout << "Enter circle A (x, y, r):" << endl;
	cin >> Ax >> Ay >> Ar;

	cout << "Enter circle B (x, y, r):" << endl;
	cin >> Bx >> By >> Br;

	float d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

	if (d == 0 and Ar == Br) cout << "Circles are the same";
	else if (d > Ar + Br or d == 0 and Ar != Br) cout << "Circles have NO common point of intercept";
	else if (d == Ar + Br)
	{
		cout << "Circles have ONE common point of intercept" << endl;
		a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
		h = sqrt(pow(Ar, 2) - pow(a, 2));

		float x = (a * (Bx - Ax) / d) + Ax;
		float y = (a * (By - Ay) / d) + Ay;

		Cx = x + h / d * (By - Ay);
		Cy = y - h / d * (Bx - Ax);

		cout << "Cx = " << Cx << " ; " << "Cy = " << Cy << endl;
	}
	else if (d < Ar + Br)
	{
		cout << "Circles have TWO common points of intercept" << endl;
		a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
		h = sqrt(pow(Ar, 2) - pow(a, 2));

		float x = (a * (Bx - Ax) / d) + Ax;
		float y = (a * (By - Ay) / d) + Ay;

		Cx = x + h / d * (By - Ay);
		Cy = y - h / d * (Bx - Ax);

		Dx = x - h / d * (By - Ay);
		Dy = y + h / d * (Bx - Ax);

		cout << "Cx = " << Cx << " ; " << "Cy = " << Cy << endl;
		cout << "Dx = " << Dx << " ; " << "Dy = " << Dy << endl;
	}
	


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
