// Подобрение решението на квадратното уравнение 

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Променливи
	int a, b, c;

	// Въвеждане на коефициентите
	cout << "a= ,b= ,c= " << endl;
	cin >> a >> b >> c;

	// Изчисление 
	float d = pow(b, 2) - 4 * a * c;
	
	// d < 0
	if (d < 0) cout << "No Real Solutions " << endl;

	// d = 0
	if (d == 0)
	{
		float x = (-b) / (2 * a);
		cout << "x1=x2" << endl << x << endl;
	}
	
	// d > 0 
	if (d > 0)
	{
		float x1 = ((-b) + sqrt(d)) / (2 * a);
		float x2 = ((-b) - sqrt(d)) / (2 * a);
		cout << "d= " << d << endl;
		cout << "x1= " << x1 << endl;
		cout << "x2= " << x2 << endl;
	} 

	return 0;
}