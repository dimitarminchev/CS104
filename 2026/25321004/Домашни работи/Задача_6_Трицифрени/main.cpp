#include <iostream>
using namespace std;

int main()
{
    int s;

    cout << "Vuvedi suma: ";
    cin >> s;

    for (int n = 100; n <= 999; n++)
    {
        int a = n / 100;         // stotici
        int b = (n / 10) % 10;   // desetici
        int c = n % 10;          // edinici

        if (a + b + c == s)
        {
            cout << n << " ";
        }
    }

    cout << endl;

    cin.get();
    cin.get();
    return 0;
}
