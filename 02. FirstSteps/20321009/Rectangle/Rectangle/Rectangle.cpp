// Периметър и лице на правоъгълник 

#include <iostream>
using namespace std;
int main()
{
	// Променливи
	float a, b, p, s;

	// Променливата а 
	cout << "a= ";
	cin >> a;

   // Променливата b
	cout << "b= ";
	cin >> b;

   // Изчисление 
	p = 2 * (a + b);
	s = a * b;

	// Резултат 
	cout << "p= ";
	cout << p << endl;

	cout << "s= ";
	cout << s;
	return 0;
}