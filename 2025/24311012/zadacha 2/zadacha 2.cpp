#include <iostream>
#include <set>

bool hasUniqueDigits(int num)
{
	std::set<int> digits;

	while (num > 0)
	{
		int digit = % 10;
		if (digits.count(digit))
		{
			return false;
		}
		digits.insert(digit);
		num /= 10;
	}
	return true;
}
int main()
{
	int M, N;
	std::cin >> M >> N;

	if (M > N)
}
int cout = 0;
for (int i = M; i <= N; i++)
if (hasUniqueDigits(i))
{
	cout++;
}


