#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    string numberString;

    cout << "Enter the number: ";
    cin >> n;

    if (n > 0)
    {

        for (int i = 1; i <= n; i++)
        {

            if (i % 7 == 0)
            {
                cout << "click ";
            }

            numberString = to_string(i);

            if (numberString.find('7') != string::npos)
            {
                cout << "click ";
            }

            else
            {
                cout << i << " ";
            }
        }
    }

    return 0;
}
