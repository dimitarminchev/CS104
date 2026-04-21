#include <iostream>
using namespace std; 
int main()
{
	int a, b;
	// въвеждане на стойност за а
	
	cout << "a=";
	cin >> a;

	cout << "b=";
	cin >> b;

	int p = 2 * (a + b);
	int s = a * b;
	// изваждаме получената разлика 
	cout << "p=" << p << endl;
	cout << "s=" << s << endl;


	return 0;
}

