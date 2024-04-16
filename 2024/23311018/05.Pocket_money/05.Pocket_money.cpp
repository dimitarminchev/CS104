#include<iostream>
using namespace std;
int main()
{
	int m01, m02, m05, m10, m20, m50, ml;

	cout << "Sum coins for 1 penny =";
	cin >> m01;
	cout << "Sum coins for 2 pennies =";
	cin >> m02;
	cout << "Sum coins for 5 pennies =";
	cin >> m05;
	cout << "Sum coins for 10 pennies =";
	cin >> m10;
	cout << "Sum coins for 20 pennies =";
	cin >> m20;
	cout << "Sum coins for 50 pennies =";
	cin >> m50;
	cout << "Sum coins for 1 lev =";
	cin >> ml;

	float sum = m01 * 0.01 + m02 * 0.02 + m05 * 0.05 + m10 * 0.1 + m20 * 0.2 + m50 * 0.5 + ml;
	float count = m01 + m02 + m05 + m10 + m20 + m50 + ml;

	cout << "Sum=" << sum << endl;
	cout << "Count=" << count << endl;

	return 0;

}
