#include <iostream>
using namespace std;
int main()
{
	int volume, aVolume = 2, bVolume = 3, bothB, leftover;

	cout << "Enter volume (liters): ";
	cin >> volume;

	bothB = volume / (aVolume + bVolume);
	leftover = volume % (aVolume + bVolume);

	cout << "Both buckets " << bothB << " times (5x" << bothB << " litres)";
	switch (leftover)
	{
	case 1: cout << " + 1 litre"; break;
	case 2: cout << " + one small bucket (2 litres)."; break;
	case 3: cout << " + one large bucket (3 litres)."; break;
	case 4: cout << " + two small buckets (2x2 litres)."; break;
	}

	return 0;
}