#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double k;
	cout << "Input the distance in kilometer :" << endl;
	cin >> k;
	double m = k * 0.621371;
	cout << "The " << k << "  Km. / hr.means " << m << " Miles / hr";
	return 0;
}

