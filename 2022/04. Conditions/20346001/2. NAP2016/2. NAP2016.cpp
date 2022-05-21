// 2. NAP2016
#include <iostream> 
using namespace std;
int main()
{
	// vars
	float income, tax;
	// въвеждаме дохода:
	cout << "Please enter income for 2016: ";
	cin >> income;
	// Данъчни сметки:
	if (income <= 1620)
	{
		// необлагаем доход
		tax = 0;
	}
	if (income > 1620 && income <= 3000)
	{
		// 18 % от дохода над 1620
		tax = (income - 1620) * 0.18;
	}
	if (income > 3000 && income <= 7200)
	{
		// 168 лв. + 20% от дохода над 3000
		tax = 168 + (income - 3000) * 0.2;
	}
	if (income > 7200)
	{
		// 1072 лв. + 22% от дохода над 7200
		tax = 1072 + (income - 7200) * 0.22;
	}

	// извеждане на резултат:
	cout << "Tax = " << tax << endl;
	return 0;
}