
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, y1, r1, x2, y2, r2;

	cout << "Circle one [x, y, r]: ";
	cin >> x1 >> y1 >> r1;
	cout << "Circle two [x, y, r]: ";
	cin >> x2 >> y2 >> r2;

	float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	if (d > r1 + r2) cout << "Circles do not intercept." << endl;
	if (d == r1 + r2) cout << "Circles intercept in 1 point." << endl;
	if (d < r1 + r2) cout << "Circles intercept in 2 points." << endl;

	return 0;
}


