#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	float x1, y1, x2, y2, r1, r2;

	cout << "Enter x1 y1 r1: ";
	cin >> x1 >> y1 >> r1;

	cout << "Enter x2 y2 r2: ";
	cin >> x2 >> y2 >> r2;

	float d = sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));

	if (d > r1 + r2) {
		cout << "The circles do not intersect." << endl;
	}
	else if (d < abs(r1 - r2)) {
		cout << "One circle is contained within the other." << endl;
	}
	else if (d == r1 + r2) {
		cout << "There is one common point." << endl;
	}
	else {
		cout << "The circles intersect." <<endl;
	}

	return 0;
}