// 4.Факториел
#include <iostream>
using namespace std;
int main()
{
	//Грона граница 
	const int n = 5;

		// Необходими променливи
		int fak = 1, index = 1;

	// Решемое посредством 


	//Отпечатване резултата цикъл с пост условие
	do
	{
		fak = fak * index;
		index = index + 1;
	} while (index <= n);
	{

	}

	cout << n << "!=" << fak << endl;
	return  0;
}
