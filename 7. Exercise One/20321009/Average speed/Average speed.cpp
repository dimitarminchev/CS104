// Средна Скорост

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   // Променливи
	float T1, T2, V1, V2;


	// Въвеждане на променливи
	 cout << "Hours1: "; 
	 cin >> T1;

	 cout << "Speed1: ";
	 cin >> V1;

	 cout << "Hours2: ";
	 cin >> T2;

	 cout << "Speed2: ";
	 cin >> V2;

	 cout << endl;


	 // Изчисления 
	  double S = (V1 * T1) + (V2 * T2) / (T1 * T2);


	 // Отпечатване на резултата 
	  cout << "Average speed: " << S << " km/h" << endl;


	 return 0;
}

