#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<double> denominations = { 0.05, 0.10, 0.20, 0.50, 1.00, 2.00, };
	vector<int>counts(denominations.size());

	cout << "Vuvedete broq na monetite i banknotite:\n";
	for (size_t i = 0; i < denominations.size(); i++) 
	{ 
		cout << denominations[i] << "lv";
		cin >> counts[i];
	}
	double total = 0;

		for (size_t i = 0; i < denominations.size(); i++)
		{
			total += counts[i] * denominations[i];
	}
		cout << "Obshtata suma v joba vi e:" << total << "lv" << endl;

		return 0;
}
