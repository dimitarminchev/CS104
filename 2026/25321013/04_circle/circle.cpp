#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float radius;
	cout << "Radius = ";
	cin >> radius;

	float area = M_PI * radius * radius;
	cout << "Area: " << area << endl;

	float perimeter = 2 * M_PI * radius;
	cout << "Perimeter: " << perimeter << endl;

	float volume = 4.0 / 3.0 * M_PI * radius * radius * radius;
	cout << "Volume: " << volume << endl;

	return 0;
}
