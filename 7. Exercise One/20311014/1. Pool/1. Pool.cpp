#include <iostream>
using namespace std;
int main()
{
	float x, y, z, volume, d1, d2, d3, flowSecond, flowHour;
	int timeTotal, timeSeconds, timeMinutes, timeHours;

	cout << "Enter pool dimentions (meters): \nX = ";
	cin >> x;
	cout << "Y = ";
	cin >> y;
	cout << "Z = ";
	cin >> z;

	volume = x * y * z;

	cout << "Enter flow amount: (cubic meters/hour) \nValve 1 = ";
	cin >> d1;
	cout << "Valve 2 = ";
	cin >> d2;
	cout << "Valve 3 = ";
	cin >> d3;

	flowHour = d1 + d2 + d3;
	flowSecond = flowHour * 0.00027778; // m^3/h to m^3/s

	timeTotal = volume / flowSecond;
	timeSeconds = timeTotal % 60;
	timeMinutes = (timeTotal / 60) % 60;
	timeHours = (timeTotal / 3600);

	cout << "Time: " << timeHours << " h. " << timeMinutes << " m. " << timeSeconds << " s. " << endl;

	return 0;
}
