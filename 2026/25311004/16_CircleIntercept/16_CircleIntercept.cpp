#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float Ax, Ay, Ar, Bx, By, Br;
	cout << "Enter circle A (x, y, r): " << endl;
	cin >> Ax >> Ay >> Ar;
	cout << "Enter circle B (x, y, r): " << endl;
	cin >> Bx >> By >> Br;

	float d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

	if (d > Ar + Br) cout << "No intercept" << endl;
	if (d == Ar + Br) cout << "Circles has One common point of intercept" << endl;
	if (d < Ar + Br) cout << "Circles has Two common points of intercept" << endl;

	return 0;
}