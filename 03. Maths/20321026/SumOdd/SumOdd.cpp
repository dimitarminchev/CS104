//Сума от цифрите на нечетни позиции на 5 цифрено число

#include<iostream>
#include<cmath>

using namespace std;
int main()

{
	int a;

	cout << "a=" << endl;
	cin >> a;

	int a1 = (a / 10000) % 10;
	int a3 = (a / 100) % 10;
	int a5 = (a / 1) % 10;
    int sum = a1 + a3 + a5;

	cout << "sum=" <<sum <<endl;

	return 0;


}