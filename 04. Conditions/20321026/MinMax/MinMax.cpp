//Минималко и Максимално число от 3

#include <iostream> 
#include <cmath> 
using namespace std;
int main()

{
	int a, b, c;

	cout << "a=?, b=?, c=?" << endl;
	cin >> a >> b >> c;

	int max = a;
	if (b > max) max = b;
	if (c > max) max = c;

	int min = a;
	if (b < min) min = b;
	if (c < min) min = c;

	cout << "minimum: " << min << endl;
	cout << "maximum: " << max << endl;


	return 0;
}