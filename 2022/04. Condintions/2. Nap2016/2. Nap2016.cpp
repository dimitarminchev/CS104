#include <iostream> 
using namespace std;
int main()
{
	// Промеливи за доход и данък
	float income, tax;

	// Извеждаме текст и въвеждаме доход
	cout << "Please enter income for 2016: ";
	cin >> income;

	// Изчисляване на данъка
	if (income <= 1620)
	{
		// Необлагаем доход
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

	// Извеждане на резултата
	cout << "Tax = " << tax << endl;

	return 0;
}