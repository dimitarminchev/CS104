// DR ZAD 15 NARASTVASHTA NAREDBA
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
        int c1 = i / 100;
        int c2 = (i % 100) / 10;
        int c3 = i % 10;
        if ((c1 < c2) && (c2 < c3)) 
        {
            S++;
        }
    }
    cout << S << endl;
    return 0;
}
