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
    cout << endl;
    // Sort even numbers
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (e[j] > e[j + 1])
            {
                int temp = e[j];
                e[j] = e[j + 1];
                e[j + 1] = temp;
            }
        }
    }
    // Print new arrays
    for (int i = 0; i < m; i++)
    {
        cout << o[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << e[i] << " ";
    }
    cout << endl;
    return 0;
}