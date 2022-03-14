// 3. Цикличен алгоритъм с постусловие
#include <iostream>
using namespace std;
int main()
{
	int i = 1;
	do
	{
		cout << i << " ";
		i++;
	} while (i < 100);

	return 0;
}