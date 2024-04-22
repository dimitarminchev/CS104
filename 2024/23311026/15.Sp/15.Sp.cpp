#include <iostream>
using namespace std;

int main()
{
	int n, sum;
	
	cout << "1.Square" << endl;
	cout << "Rectangle" << endl;
	cout << "Circle" << endl;
	cout << "Please select (1-3): ";

	cin >> n;


	//square
	if (n == 1)
	{
		int a;
		cout << "a=";
		cin >> a;
		cout << "p=" << 4 * a << endl;
		cout << "s=" << a * a << endl;
	}

	//rectangle
	if (n==2)
	{ 
		int a, b;
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "p=" << 2 * (a+b) << endl;
		cout << "s=" << a * b << endl;
	}


	//circle

	if (n==3)
	{
		float r;
		cout << "r=";
		cin >> r;
		cout << "p=" << 4*3.14*r << endl;
		cout << "s=" << 3*14*r*r << endl;
    }

    return 0;

}