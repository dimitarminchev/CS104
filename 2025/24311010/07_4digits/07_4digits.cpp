#include <iostream>
using namespace std;
int main()
{
// Декларираме променлива, цяло число
	int n;

	// Извеждаме подканващ текст и въвеждаме числото
	cout << "Please enter 4 digit number:" << endl;
	cin >> n;

	// Отцепваме цифрите на числото
	int a = (n / 1000) % 10; // Хилядни
	int b = (n / 100) % 10; // Стотоци
	int c = (n / 10) % 10; // Десетици
	int d = (n / 1) % 10; // Единици

	// Намираме сума и произведение
	int s = a + b + c + d;
	int p = a * b * c * d;

	// Извеждаме получения резултат
	cout << s << " " << p << endl; 

	return 0;

}
