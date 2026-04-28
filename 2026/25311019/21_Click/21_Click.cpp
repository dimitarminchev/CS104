#include <iostream>
using namespace std;
int main()
{
	for (int k = 1;k <= 100; k++)
	{
		// k%7 ==0 => кратно на 7
		// к%10 ==7 >= единиците съдържащи 7
		//к/10==7 >= десетиците съдуржащи 7 
		if (k % 7 == 0 || k % 10 == 7 || k / 10 == 7)
		{
			cout << " click ";
		}
		else cout << k << " "; 
	}
	cout << endl;
	return 0;
}