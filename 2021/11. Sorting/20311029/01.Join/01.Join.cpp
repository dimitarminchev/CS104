#include <iostream>
#include <string>
#include<algorithm>
#include <array> 

using namespace std;

int main()
{
    int n;

    cin >> n;

    string array1Str;

    cin.ignore(10, '\n');

    getline(cin, array1Str);

    array1Str.erase(remove_if(array1Str.begin(), array1Str.end(), isspace), array1Str.end());

    int m;

    cin >> m;

    int* ar = new int[m + n];

    for (int i = 0; i < n; i++)
    {
        ar[i] = stoi(string(1,array1Str[i]));
    }
    for (int i = n; i < n + m; i++)
    {
        cin >> ar[i];
    }

    sort(ar , ar + (m + n));

    for (int i = 0; i < m + n; i++)
    {
        cout << ar[i] << " ";
    }
}
