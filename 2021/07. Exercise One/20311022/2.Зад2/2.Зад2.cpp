#include <iostream>
using namespace std;
int main() {
	cout << "Please enter T1, T2, V1, V2" << endl;
	float T1, T2, V1, V2, S, T, V;
	cin >> T1 >> T2 >> V1 >> V2;
	S = T1 * V1 + T2 * V2;
	T = T1 + T2;
	V = S / T;
	cout << "The average speed is: " << V << "km/h" << endl;
	return 0;
}