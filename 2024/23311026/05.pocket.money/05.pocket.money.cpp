#include <iostream>
using namespace std;

int main()
{
	int one, two, five, ten, twenty, fifty, oone;

	cout << "one=";
	cin >> one;
	cout << "two=";
	cin >> two;
	cout << "five=";
	cin >> five;
	cout << "ten=";
	cin >> ten;
	cout << "twenty=";
	cin >> twenty;
	cout << "fifty=";
	cin >> fifty;
	cout << "oone=";
	cin >> oone;


	int count = one + two + five + ten + twenty + fifty + oone;

	float sum = (one * 0.01) + (two * 0.02) + (five * 0.05) + (ten * 0.10) + (twenty * 0.20) + (fifty * 0.50) + (oone * 1);
	cout << "sum=" << sum << endl << "count=" << count << endl;

    return 0;

}