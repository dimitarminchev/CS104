#include <iostream>
using namespace std;
int main()
{
	int m01, m02, m05, m10, m20, m50, m1;

	cout << "Money count 1 cent =";
	cin >> m01;

	cout << "Money count 2 cent =";
	cin >> m02;

	cout << "Money count 5 cent =";
	cin >> m05;

	cout << "Money count 10 cent =";
	cin >> m10;

	cout << "Money count 20 cent =";
	cin >> m20;

	cout << "Money count 50 cent =";
	cin >> m50;

	cout << "Money count 1 lev =";
	cin >> m1;

	float sum = m01 * 0.01 + m02 * 0.02 + m05 * 0.05 + m10 * 0.10 + m20 * 0.20 + m50 * 0.50 + m1;
	float count = m01 + m02 + m05 + m10 + m20 + m50 + m1;

	cout << "Sum =" << sum << endl;
	cout << "Count =" << count << endl;
}