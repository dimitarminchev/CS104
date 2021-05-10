#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int d[1000], m = 0, n = 0, pos = 0, len1 = 1, len = 0, lastPos = 0, lastLen = 0;
    string array_string;

    cout << "Enter array: ";
    getline(cin, array_string, '\n');

    int array_size = array_string.size();

    for (int i = 0; i <= array_size; i++)
    {
        if (array_string.substr(i, 1) != " ")
        {
            
            if ((i != array_size) && (array_string.substr(i + 1, 1) != " "))
            {
                len1++;
            }
            else
            {
                d[m] = stoi(array_string.substr(i - len1 + 1, len1));
                len1 = 1;
                m++;
            }
        }
    }

    for (int j = 1; j <= m; j++)
    {
        if (d[j] == d[j - 1])
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

        if (d[j] != d[j - 1])
        {
            n = 0;
            pos = j;
            len = 0;
        }
    }

    cout << "\nLargest string starts at position (" << lastPos << ")." << endl;

    return 0;
}