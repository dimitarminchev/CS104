// Задача 1. Басейн с три тръби
#include <iostream>
using namespace std;
int main()
{
	double A, B, C, D1, D2, D3;
	cout << "A; " << "B; " << "C; " << "D1; " << "D2; " << "D3:";
	cin >> A >> B >> C >> D1 >> D2 >> D3;
	double V = A * B * C;
	double D = D1 + D2 + D3;
	double result = V / D;
	cout << V << endl;
	cout << result << endl;

}

