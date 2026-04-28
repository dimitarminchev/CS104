#include <iostream>
using namespace std;
int main()
{
	for (int k = 1; k < 100; k++)
	{
		// k %  7 == 0 => кратно е на 7
		// k % 10 == 7 => единиците съдържа 7
		// k / 10 == 7 => десетиците съдържа 7
		if (k % 7 == 0 || k % 10 == 7 || k / 10 == 7)
		{
			cout << "click ";
		}
		else cout << k << " ";
	}
	cout << endl;
	return 0;
}
