#include <iostream>
using namespace std;
int main()
{
	//Декларираме две промениливи а и б
	int a, b;

	// Въвеждане на стойност за а 
	cout << "a=";
	cin >> a;

	// Въвеждане на стойност за б
	cout << "b=";
		cin >> b;

	//Смятаме периметъра на лице
	int p = 2 * (a + b);
	int s = a * b;

	//Изваждаме получената разлика
	cout << "p=" << p << endl;
	cout << "s=" << s << endl; 

	return 0;
}