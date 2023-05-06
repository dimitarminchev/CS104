#include<iostream>
using namespace std;
int main() {
	int X = 1, Y = 1;
	
	// Това е за увеличаването
	cout << X + 1 << endl;
	cout << X++ << endl;
	cout << ++Y << endl;

	// Това е за намалянето
	cout << X - 1 << endl;
	cout << X-- << endl;
	cout << --Y << endl;
	return 0;
}