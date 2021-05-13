#include <iostream>
#include <vector>
using namespace std;

void getIndex(vector<int> v, int K)
{
	auto it = find(v.begin(), v.end(), K);

	if (it != v.end())
	{
		int index = it - v.begin();
		cout << index << " ";
	}
}
int main()
{
	int count = 1, tempCount = 1, number = 0;

	int length;
	cin >> length;
	int* arr = new int[length];
	vector<int> v;

	for (int i = 0; i < length; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < length; i++)
	{
		v.push_back(arr[i]);
	}

	for (int i = 0; i < length - 1; i++)
	{
		if (arr[i] == arr[i + 1]) {
			tempCount++;
		}
		else tempCount = 1;

		if (tempCount > count)
		{
			count = tempCount;
			number = arr[i];
		}
	}

	cout << count << endl;

}