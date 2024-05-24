// DR ZAD14 BROI PETICI
#include <iostream>
using namespace std;

int main() 
{
    int N, M;
    cin >> N >> M;
    if (N > M) 
    {
        int t = N;
        N = M;
        M = t;
    }
    int S = 0;
    for (int i = N; i <= M; i++) 
    {
        int j = i;
        while (j > 0) 
        {
            if ((j % 10) == 5) 
            {
                S++;
            }
            j /= 10;
        }
    }
    cout << S << endl;
    return 0;
}
