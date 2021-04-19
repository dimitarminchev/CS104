#include <iostream>
using namespace std;
int main()
{
    // Необходими променливи
    int n, A[1000], B[10] = {0,0,0,0,0,0,0,0,0,0};

    // Въвеждаме горна граница
    cout << "n=";
    cin >> n;

    // Въвеждане на числата в едномерният масив
    for (int i = 0; i < n; i++) cin >> A[i];

    // Преброяване
    for (int i = 0; i < n; i++)  B[A[i]]++;

    // Извеждане на броя на срещанията
    for(int i = 0; i < 10; i++)
    {
        if (B[i] > 0)
        {
            cout << i << " => " << B[i] << endl;
        }
    }

    return 0;
}
