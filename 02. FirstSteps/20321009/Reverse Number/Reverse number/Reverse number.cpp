// Отцепване на цифрите на 3 цифрено число

#include <iostream>
using namespace std;
int main()
{
	// Променлива а
	int a;

	// Въвеждане на число
	cout << "a=";
	cin >> a;

	// Изчисления 
	int a1 = (a / 100) % 10;
	int a2 = (a / 10) % 10;
	int a3 = (a / 1) % 10;

	// Резултат
	cout << a3 << a2 << a1 << endl;

	return 0;
}

