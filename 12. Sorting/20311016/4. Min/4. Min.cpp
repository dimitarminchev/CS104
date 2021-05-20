#include <iostream>

void f_sort(int* d)
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (d[j] > d[j + 1])
			{
				int temp = d[j];
				d[j] = d[j + 1];
				d[j + 1] = temp;
			}
		}
	}
}

int main()
{
	const int COUNT = 3;
	int d1[COUNT][COUNT] = {}, d3[COUNT * 3] = {}, d4[COUNT][COUNT] = {}, num, n = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> d1[i][j];
		}
	}

	std::cout << "Enter array size: ";
	std::cin >> num;

	int* d2 = new int[num];

	std::cout << "Enter array elements: ";
	for (int k = 0; k < num; k++)
	{
		std::cin >> d2[k];
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			d3[n] = d1[i][j];
			n++;
		}
	}

	f_sort(d3);

	for (int i = 0; i < num; i++)
	{
		for (int j = 9; j > 0; j--)
		{
			if (d2[i] < d3[j])
			{
				d3[j] = d2[i];
				break;
			}
		}
	}

	f_sort(d3);

	std::cout << std::endl;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			d4[i][j] = d3[i * 3 + j];
			std::cout << d4[i][j] << " ";
		}
		std::cout << std::endl;
	}
}