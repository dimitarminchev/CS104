#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double S;
    int N, M;
    double price;
    double best = 0;

    cout << "Vuvedi suma S, broi priqteli N i broi vidove podaruci M: ";
    cin >> S >> N >> M;

    cout << "Vuvedi " << M << " ceni na podarucite: ";

    for (int i = 1; i <= M; i++)
    {
        cin >> price;

        if (price * N <= S && price > best)
        {
            best = price;
        }
    }

    if (best > 0)
    {
        cout << fixed << setprecision(2);
        cout << "Nai-skupiat podaruk e: " << best << endl;
    }
    else
    {
        cout << "Nqma podhodqsht podaruk." << endl;
    }

    system("pause");
    return 0;
}
