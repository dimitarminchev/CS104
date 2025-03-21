
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()

{
	float R;

	cout << "R=";
		cin >> R ;

		float P = 2 * (M_PI * R);
		cout << " 2 * (M_PI * R) " << P << endl;
		float S = M_PI * R * R;
		cout << "M_PI * R * R" << S << endl;
		float V = (4.0 / 3.0) * M_PI * pow(R, 3);
		cout << "(4.0 / 3.0) * M_PI * pow(R, 3)" << V << endl;

		return 0;
}


