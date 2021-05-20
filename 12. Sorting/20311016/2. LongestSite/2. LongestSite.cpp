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
    int m = 0, n = 0, pos = 0, len = 0, lastPos = 0, lastLen = 0;
    std::vector<int> list = readLineToVector();
    m = list.size();

    for (int j = 1; j <= m; j++)
    {
        if (list[j] == list[j - 1])
        {
            n++;
            pos = j - n;
            len = n + 1;
        }

        if (len > lastLen)
        {
            lastPos = pos;
            lastLen = len;
        }

        if (list[j] != list[j - 1])
        {
            n = 0;
            pos = j;
            len = 0;
        }
    }

    std::cout << "\nLargest string starts at position (" << lastPos << ")." << std::endl;
}