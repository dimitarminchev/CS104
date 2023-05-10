#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cout << "Enter large text:\n";
    getline(cin, s);

    int letters[255];
    for (int i = 0; i < 255; i++) letters[i] = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int pos = (int)(s[i]);
        letters[pos]++;
    }

    cout<<endl;

    for (int i = 65; i <= 90; i++)
    {
        cout << (char)i << " => " << letters[i] << endl;
    }

    for (int i = 97; i <= 122; i++)
    {
        cout << (char)i << " => " << letters[i] << endl;
    }

    return 0;
}

