// Аудио Запис

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	// Променливи
	float space, h, m, s;

	
	// Въвеждане 
	cout << "Your available space: ";
	cin >> space;

	cout << "Hours: ";
	cin >> h;

	cout << "Minutes: ";
	cin >> m;

	cout << "Secounds: ";
	cin >> s;

	cout << endl;

	// Изчисления 
	float fspace = space / 1024;
	int time = (h / 3600) + (m / 60) + s;


	// Отпечатване 
	if (space >= fspace) cout << "No available space :( ";
	else cout << "You have enough space :) ";

	cout << endl;
	  
  return 0;
}

