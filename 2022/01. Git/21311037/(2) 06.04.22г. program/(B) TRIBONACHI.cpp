#include <iostream>
using namespace std;
int main()
{
	int n, a = 1, b = 1, c = 1, d = a + b + c;
    cin >> n;

	cout << "1 1 1 ";
	while (d < n)
	{
		cout << d << " ";
		a = b; 
		b = c;
		c = d;
		d = a + b + c;
	}
	cout << endl;
	return 0;
}
