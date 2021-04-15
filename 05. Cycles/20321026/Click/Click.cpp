// Игра Цък!
#include<iostream>
using namespace std;
int main()
{

	for (int i = 1; i < 100; i++)
	{
		if (i % 7 == 0) cout << "cklick! ";
		else if (i / 10 == 7 || i % 10 == 7) cout << "click! ";
		else cout << i << " " ;
	}
	return 0;
}