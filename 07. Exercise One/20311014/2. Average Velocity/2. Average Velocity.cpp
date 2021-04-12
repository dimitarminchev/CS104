#include <iostream>
using namespace std;
int main()
{
	int v1, t1, v2, t2, avg;

	cout << "Velocity 1 (km/h) = ";
	cin >> v1;
	cout << "Time 1 (hours) = ";
	cin >> t1;
	cout << "Velocity 2 (km/h) = ";
	cin >> v2;
	cout << "Time 2 (hours) = ";
	cin >> t2;

	avg = ((t1 * v1) + (t2 * v2)) / (t1 + t2);

	cout << "Average speed: " << avg << " km/h." << endl;

	return 0;
}
