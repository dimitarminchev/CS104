// 4.Минимално и максимално от три числа
 
#include <iostream>
using namespace std;

int main()
{
	//Променливи за три цели числа

	int a, b, c;

	//Въвеждаме числата от клавиатурата
	cout << "a=?,b=?,c=?" << endl;
	cin >> a >> b >> c;
	//Намиране на максималното и минималното число 

	int max = a;
	if (b > max)max = b;
	if (c > max)max = c;

	//Намиране на минималното число


	int min = a;
		if (b > min)min = b;
	if (c > max)max = c;

	//Отпечатване на получените мин и макс.

	cout << "min=" << min << endl;
	cout << "max=" << max << endl;

	return 0;
	
}
