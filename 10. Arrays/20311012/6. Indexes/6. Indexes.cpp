#include <iostream>
using namespace std;
int main()
{
    // Необходими променливи
    int n, p, A[1000];

    // Въвеждаме горна граница
    cout << "n=";
    cin >> n;
    cout << "p=";
    cin >> p;

    // Въвеждане на числата в едномерният масив
    for (int i = 0; i < n; i++) cin >> A[i];

    // Извеждане на индекса където числото се среща
    cout << "Indexes: ";
    for (int i = 0; i < n; i++)
    {
        if (A[i] == p)
        {
            cout << i << " ";
        }
    }

    return 0;
}
