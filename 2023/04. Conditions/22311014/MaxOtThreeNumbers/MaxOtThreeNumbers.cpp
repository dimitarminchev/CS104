#include<iostream>
using namespace std;
int main()
{
	int a, b, c;

	cout << "a=";
    cin >> a;

    cout << "b=";
    cin >> b;

    cout << "c=";
    cin >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	cout << "max=" << max << endl;

	return 0;
}
