#include <iostream>
#include <string>
using namespace std;

int main()
{
    string ranks[] = {"2", "3", "4", "5", "6", "7", "8", "9", "10",
                      "Vale", "Dama", "Pop", "Aso"};
    string suits[] = {"spatiq", "karo", "kupa", "pika"};

    int N;
    cout << "Vuvedi N (1..51): ";
    cin >> N;

    int count = 1;

    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (count >= N)
            {
                cout << ranks[i] << " " << suits[j];

                if (!(i == 12 && j == 3))
                {
                    cout << ", ";
                }
            }

            count++;
        }
    }

    cout << endl;

    system("pause");
    return 0;
}
