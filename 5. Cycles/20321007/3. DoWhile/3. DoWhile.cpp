// 2. Цикличен алгоритъм с постусловие
#include <iostream>
using namespace std;
int main()
{
	
	int i = 1;

	//Цикъл с постусловие
	do
	{
		cout << i << ' ';
		i++;
	} 	while (i <= 100);
	
		return 0;
}