#include <iostream>
using namespace std;

int main()
{
    int N, S;

    cout << "Vuvedi N i S: ";
    cin >> N >> S;

    while (N > 0)
    {
        int power = 1;

        while (power * S <= N)
        {
            power *= S;
        }

        cout << power << endl;
        N -= power;
    }

    system("pause");
    return 0;
}
