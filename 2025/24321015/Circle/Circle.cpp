#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	float r;
	cout << "r =";
	cin >> r;
	
	float P = 2 * M_PI * r;
	float S = pow(M_PI, 2) * r;
	float V = (4.0 / 3.0) * M_PI * pow(r, 3);

	cout << "P = " << S << endl;
	cout << "S = " << S << endl;
	cout << "V = " << S << endl;

	return 0;
}

