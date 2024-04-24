#include <iostream>
using namespace std;
int main()
{
	double a, b,c;
	double sum = 180;
	cout << "Input the 1st angle of the triangle :" << endl;
	cin >> a;
	cout << "Input the 2nd angle of the triangle :" << endl;
	cin >> b;
	c = sum - (a + b);
	cout << "The 3rd of the triangle is : " << c << endl;
	return 0;
}


