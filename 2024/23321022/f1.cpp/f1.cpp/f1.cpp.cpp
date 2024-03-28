#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	int result = 0;
	cout << "Please, could you tell me the limit of number row?" << endl;
	cin >> n;

	for (unsigned int i = 0; i < n; i++)
	{
		result += pow(i, n);
	}
	cout << "the sum is" << result << endl;

	return 0;
}

