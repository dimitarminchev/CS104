#include<iostream>
using namespace std;
int main()
{
	// Четирицифрено число
	int a;

	// Въвеждане на четирицифрено число
	cout << "a=?" << endl;
	cin >> a; // 1234
	
	// Отцепване на цифрите на числото
	int a1 = (a / 1000) % 10; // 1
	int a2 = (a / 100) % 10; // 2
	int a3 = (a / 10) % 10; // 3
	int a4 = (a / 1) % 10; // 4

	// Сметки
	int s = a1 + a2 + a3 + a4;
	int p = a1 * a2 * a3 * a4;

	// Отпечатване сума и произведение на цифрите на числото
	cout << s << endl;
	cout << p << endl;

	return 0;
}