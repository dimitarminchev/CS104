#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int secret, guess;

    srand(time(0)); // генерира случайно число
    secret = rand() % 100 + 1; // число от 1 до 100

    do
    {
        cout << "Vuvedi chislo (1-100): ";
        cin >> guess;

        if (guess > secret)
        {
            cout << "Nadolu!" << endl;
        }
        else if (guess < secret)
        {
            cout << "Nagore!" << endl;
        }
        else
        {
            cout << "Bravo! Pozna chislotо!" << endl;
        }

    } while (guess != secret);

    cin.get();
    cin.get();
    return 0;
}
