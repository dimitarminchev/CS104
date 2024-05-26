// DR ZAD8 KRATNI NA 50
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
    M = M - (M % 50);
    for (int i = M; i >= N; i -= 50) 
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
