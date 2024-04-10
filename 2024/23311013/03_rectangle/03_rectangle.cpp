#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
	int a,b;
	
	print("Enter a value of a: ");
	cin >> a;
	print("Enter a value of b: ");
	cin >> b;

	print("P = " << (a + b) * 2);
	print("S = " << a * b);

	return 0;
}