#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x;
	cout << "Enter number:";
	cin >> x;

	int post_increment = x++;
	cout << "After post increment by 1 the number is :" << post_increment << endl;

	int pre_increment = ++x;
	cout << "After pre increment by 1 the number is :" << pre_increment << endl;

	x += 1;
	cout << "After increasing by 1 the number is :" << x << endl;

	int post_decrement = x--;
	cout << "After post decrement by 1 the number is : " << post_decrement << endl;

	int pre_decrement = --x;
	cout << "After pre decrement by 1 the number is : " << pre_decrement<< endl;

	x -= 1;
	cout << "After decreasing by 1 the number is : " << x<< endl;
	return 0;
}
