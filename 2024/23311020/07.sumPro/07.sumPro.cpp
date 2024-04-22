#include <iostream>

using namespace std;

int main()
{
	int num, firstPos, secondPos, thirdPos, fourPos;
	cout << "Number: ";
	cin >> num;

	firstPos = (num / 1000) % 10;
	secondPos = (num / 100) % 10;
	thirdPos = (num / 10) % 10;
	fourPos = num % 10;

	cout << thirdPos + secondPos + firstPos + fourPos << endl;
	cout << thirdPos * secondPos * firstPos * fourPos << endl;

	return 0;
}
