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
	if (d == Ar + Br) cout << "Circles have one common point of intercept" << endl;
	if (d < Ar + Br) cout << "Circles have two common points of intercept" << endl;

	if (d == Ar + Br) {
		float x = Ax + Ar * (Bx - Ax) / d;
		float y = Ay + Ar * (By - Ay) / d;
		cout << "Point: (" << x << ", " << y << ")" << endl;
	}

	if (d < Ar + Br) {
		float a = (pow(Ar, 2) - pow(Br, 2) + pow(d, 2)) / (2 * d);
		float h = sqrt(pow(Ar, 2) - pow(a, 2));
		float Px = Ax + a * (Bx - Ax) / d;
		float Py = Ay + a * (By - Ay) / d;
		float x1 = Px + h * (By - Ay) / d;
		float y1 = Py - h * (Bx - Ax) / d;
		float x2 = Px - h * (By - Ay) / d;
		float y2 = Py + h * (Bx - Ax) / d;
		cout << "Point 1: (" << x1 << ", " << y1 << ")" << endl;
		cout << "Point 2: (" << x2 << ", " << y2 << ")" << endl;
	}

	return 0;
}