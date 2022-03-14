//Произведение от цифрите на четните позиции на 6 цифрено цисло

#include<iostream>
#include<cmath>

using namespace std;
int main()

{
	int a;

	cout << "a=" << endl;
	cin >> a;

	int a6 = (a / 100000) % 10;
	int a4 = (a / 1000) % 10;
	int a2 = (a / 10) % 10;
	int sum = a6 * a4 * a2;

	cout << "sum=" << sum << endl;

	return 0;


}