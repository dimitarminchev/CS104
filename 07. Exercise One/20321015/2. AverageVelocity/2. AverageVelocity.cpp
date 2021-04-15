// Задача 2. Средна скорост
#include <iostream>
using namespace std;
int main()
{

	double T1, T2, V1, V2;
	cout << "T1,V1,T2,V2:" << endl;
	cin >> T1 >> V1 >> T2 >> V2;
	double S = ((V1 * T1) + (V2 * T2)) / (T1 + T2);
	cout << "The average speed = " << S << endl;
}