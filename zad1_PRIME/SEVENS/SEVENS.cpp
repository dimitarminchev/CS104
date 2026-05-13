#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int count = 0;
	for (int i = a; i <= b; i++) {
		int n = i;
		while ( n> 0); {
			if (n % 10 == 7) count++;
				n /= 10;
		} 
	}
	cout << count << " ";
	return 0;
}