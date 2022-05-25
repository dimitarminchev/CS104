// Задача 6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float space, hours, minutes, seconds;
	cout << "space=?, h=?, m=?, s=? " << endl;
	cin >> space >> hours >> minutes >> seconds;
	float freespace = space / 1024;
	int timing = (hours * 3600) + (minutes * 60) + seconds;

	if (timing > freespace) cout << "no space" << endl;
	else cout << " has space " << endl;

	return 0;
}


