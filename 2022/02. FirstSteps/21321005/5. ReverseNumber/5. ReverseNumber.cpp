#include<iostream>
using namespace std;
int main()
{
	// Трицифрено число
	int a;

	// Въвеждане на трицифреното число
	cout << "a=?" << endl;
	cin >> a;

	// Отпечатване на цифрите на числото
	int a1 = (a / 100) % 10;
	int a2 = (a / 10) % 10;
	int a3 = (a / 1) % 10;

	// Отпечатване на числото наобратно
	cout << a3 << a2 << a1 << endl;

	return 0;
}