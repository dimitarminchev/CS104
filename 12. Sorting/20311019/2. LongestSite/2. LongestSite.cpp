#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int m = 0, pos = 0, len_string = 1, len = 1, lastPos = 0, lastLen = 0;
    string array_string;

    cout << "Enter array: ";
    getline(cin, array_string, '\n');

    int array_size = array_string.size();
    int* d = new int[array_size];

    // Convert string into array of integers
    for (int i = 0; i <= array_size; i++)
    {
        if (array_string.substr(i, 1) != " ")
        {
            
            if ((i != array_size) && (array_string.substr(i + 1, 1) != " "))
            {
                len_string++;
            }
            else
            {
                d[m] = stoi(array_string.substr(i - len_string + 1, len_string));
                len_string = 1;
                m++;
            }
        }
    }

    // Find longest site
    for (int i = 1; i <= m; i++)
    {
        if (d[i] == d[i - 1])
        {
            pos = i - len;
            len++;
        }
        
        if (len > lastLen)
        {
            lastPos = pos;
            lastLen = len;
        }

        if (d[i] != d[i - 1]) len = 1;
    }

    cout << "\nLargest string starts at position (" << lastPos << ")." << endl;

    return 0;
}