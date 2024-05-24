// DR ZAD16 DVUCIFRENI SUMI
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
        int c3 = i % 10;
        if (c3 == 0) 
        {
            continue;
        }
        int c = c3 * 10 + c1;
        if (i % c == 0) 
        {
            cout << i << "/" << c << endl;
            S++;
        }
    }
    cout << S << endl;
    return 0;
}
