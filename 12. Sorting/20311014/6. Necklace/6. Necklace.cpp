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
    int* d2 = new int[array_size];

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

    // Sort odd numbers
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (o[i] < o[j])
            {
                int temp = o[i];
                o[i] = o[j];
                o[j] = temp;
            }
        }
    }
    cout << endl;

    // Sort even numbers
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (e[i] > e[j])
            {
                int temp = e[i];
                e[i] = e[j];
                e[j] = temp;
            }
        }
    }

    // Merge arrays
    for (int i = 0; i < m + n; i++)
    {
        if (i < n) d2[i] = o[i];
        else if (i >= n) d2[i] = e[i - n];
        cout << d2[i] << " ";
    }
    cout << endl;

    return 0;
}