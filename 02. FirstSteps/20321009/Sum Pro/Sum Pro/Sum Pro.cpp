// Сума и произведение от цифрите на 4 цифрено число

#include <iostream>
using namespace std;
int main()
{
	// Променлива а
	int a;

	// Въвеждане на четири цифрено число
	cout << "a=";
	cin >> a;

	// Изчисления 
	int a1 = (a / 1000) % 10;
	int a2 = (a / 100) % 10;
	int a3 = (a / 10) % 10;
	int a4 = (a / 1) % 10;

	// Резултат
	int s = a1 + a2 + a3 + a4;
	int p = a1 * a2 * a3 * a4;

	cout << s << endl;
	cout << p << endl;

	return 0;
}