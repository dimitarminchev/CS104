#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    int t = 0, len = 1, n = 0, m = 0;
    string array_string;

    cout << "Enter array: ";
    getline(cin, array_string, '\n');

    int array_size = array_string.size();
    int* d = new int[array_size];
    int* e = new int[array_size];
    int* o = new int[array_size];

    // Convert string into array of integers
    for (int i = 0; i <= array_size; i++)
    {
        if (array_string.substr(i, 1) != " ")
        {

            if ((i != array_size) && (array_string.substr(i + 1, 1) != " "))
            {
                len++;
            }
            else
            {
                d[t] = stoi(array_string.substr(i - len + 1, len));
                len = 1;
                t++;
            }
        }
    }

    // Sort array
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {
            if (d[i] < d[j])
            {
                int temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }

    // Split odd and even numbers
    for (int i = 0; i < t; i++)
    {
        if (d[i] % 2 == 0)
        {
            e[n] = d[i];
            n++;
        }
        else
        {
            o[m] = d[i];
            m++;
        }
    }
    cout << endl;

    // Print new arrays
    for (int i = 0; i < m; i++) cout << o[i] << " ";
    cout << endl;

    for (int i = 0; i < n; i++) cout << e[i] << " ";
    cout << endl;

    return 0;
}