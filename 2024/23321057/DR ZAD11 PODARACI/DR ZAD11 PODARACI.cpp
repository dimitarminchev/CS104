// DR ZAD11 PODARACI
#include <iostream>
using namespace std;

int main() 
{
    int S, N, M;
    cin >> S >> N >> M;
    float MaxA = 0;
    for (int i = 0; i < M; i++) 
    {
        float A;
        cin >> A;
        if (S >= (N * A)) 
        {
            if (MaxA < A) 
            {
                MaxA = A;
            }
        }
    }
    cout << MaxA << endl;
    return 0;
}

