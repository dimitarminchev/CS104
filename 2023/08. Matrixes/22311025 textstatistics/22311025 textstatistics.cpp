﻿#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter big text:\n";
    getline(cin, s);

    int Letters[255];
    for (int i = 0; i < 255; i++) Letters[i] = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int pos = (int)(s[i]);
        Letters[pos]++;
    }

    // A .. Z
    for (int i = 65; i <= 90; i++)
    {
        cout << (char)i << " => " << Letters[i] << endl;
    }

    // a .. z
    for (int i = 97; i <= 122; i++)
    {
        cout << (char)i << " => " << Letters[i] << endl;
    }

    return 0;
}
