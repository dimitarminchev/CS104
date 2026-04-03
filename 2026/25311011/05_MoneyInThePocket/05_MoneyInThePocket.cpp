#include <iostream>
using namespace std;

int main() {
	int one, two, five, ten, twenty, fifthy, One, Two;
	cout << "1ec = ";
	cin >> one;
	cout << "2ec = ";
	cin >> two;
	cout << "5ec = ";
	cin >> five;
	cout << "10ec = ";
	cin >> ten;
	cout << "20ec = ";
	cin >> twenty;
	cout << "50ec = ";
	cin >> fifthy;
	cout << "1e = ";
	cin >> One;
	cout << "2e = ";
	cin >> Two;

	float sum = one * 1 + two * 2 + five * 5 + ten * 10 + twenty * 20 + fifthy * 50 + One * 100 + Two * 200;
	cout << "The total amount of money in the pocket is : " << sum / 100 << " euro." << endl;
}