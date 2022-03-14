// 6. 
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float Ax, Ay, Ar, Bx, By, Br;

	cout << "Enter first circle [x,y,z]: " << endl;
	cin >> Ax >> Ay >> Ar;
	cout << "Enter first circle [x,y,z]: " << endl;
	cin >> Bx >> By >> Br;
	float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

	if (Ar + Br < d) cout << "No intersection points." << endl;
	if (Ar + Br == d) cout << "One intersection point." << endl;
	if (Ar + Br > d) cout << "Two intersection points" << endl;

	return 0;

}

