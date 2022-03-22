#include <iostream> 
#include <math.h>
using namespace std;
int main()
{
	int shape;
	float surfArea, perimeter;

	cout << "Select shape" << endl;
	cout << "1 - square" << endl;
	cout << "2 - trinagle" << endl;
	cout << "3 - circle" << endl;
	cin >> shape;
	cout << "Select parameters: ";

	switch (shape)
	{
	case 1:
		float a;
		cin >> a;

		surfArea = pow(a, 2);
		perimeter = a * 4;

		break;
	case 2:
		float a, b, c;
		cin >> a >> b >> c;

		perimeter = a + b + c;;
		surfArea = sqrt(perimeter * (perimeter - a) * (perimeter - b) * (perimeter - c));

		break;

	case 3:
		float r;
		cin >> r;

		surfArea = 3.14* pow(r, 2);
		perimeter = 2*3.14*r;

		break;
	}

	cout << "Surface area : " << surfArea << endl;
	cout << "Perimeter : " << perimeter << endl;

	return 0;
}