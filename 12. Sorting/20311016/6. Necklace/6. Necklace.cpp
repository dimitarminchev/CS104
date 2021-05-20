#include <iostream>
#include <sstream>
#include <vector>

std::vector<int> readLineToVector()
{
    std::vector<int> list;
    std::string input;

    std::getline(std::cin, input);

    int number;
    std::stringstream ss(input);
    while (ss >> number)
    {
        list.push_back(number);
    }

    return list;
}

int main()
{
    int t = 0, len = 1, n = 0, m = 0;
    std::vector<int> list = readLineToVector();
    t = list.size();
    int* e = new int[t];
    int* o = new int[t];
    int* d2 = new int[t];

    for (int i = 0; i < t; i++)
    {
        if (list[i] % 2 == 0)
        {
            e[n] = list[i];
            n++;
        }
        else
        {
            o[m] = list[i];
            m++;
        }
    }

    for (int i = 0; i < m - 1; i++)
    {
        for (int j = 0; j < m - 1; j++)
        {
            if (o[j] > o[j + 1])
            {
                int temp = o[j];
                o[j] = o[j + 1];
                o[j + 1] = temp;
            }
        }
    }

    std::cout << std::endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (e[j] < e[j + 1])
            {
                int temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < m + n; i++)
    {
        if (i < n) d2[i] = o[i];
        else if (i >= n) d2[i] = e[i - n];

        std::cout << d2[i] << " ";
    }

    std::cout << std::endl;
}