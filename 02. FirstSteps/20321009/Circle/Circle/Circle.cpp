// Периметър и лице на кръг

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	// Променливи 
	float r, p, s;
	float PI = acos(-1.0); // формула за пи

	// Въвеждане на радиус 
	cout << "r=";
	cin >> r;

	// Изчисления
	p = 2 * PI * r;
	s = PI * pow(r, 2);

	//Резултат
	cout << "p=" << p << endl;
	cout << "s=" << s << endl;

	return 0;
}