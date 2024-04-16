#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl

int main()
{
	int one, two, five, ten, twenty, fifty, lev;

	print("Enter a number of one st. ");
	cin >> one;

	print("Enter a number of two st.  ");
	cin >> two;

	print("Enter a number of five st. ");
	cin >> five;

	print("Enter a number of ten st. ");
	cin >> ten;

	print("Enter a number of twenty st. ");
	cin >> twenty;

	print("Enter a number of fifty st. ");
	cin >> fifty;
	
	print("Enter a number of levs. ");
	cin >> lev;

	double money = (one * 0.01) + (two * 0.02) + (five * 0.05) + (ten * 0.1) + (twenty * 0.2) + (fifty * 0.5) + lev;
	int moneti = one + two + five + ten + twenty + fifty + lev;

	print("Total money: " << money);
	print("Total coins: " << moneti);
	return 0;
}