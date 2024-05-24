// DR ZAD17 SUMI NA STEPENI
#include <iostream>
using namespace std;

int main() 
{
    long N, S;
    cin >> N >> S;
    long t = 1;
    while (t <= N) 
    {
        t *= S;
    }
    t /= S;
    while (N != 0 && t != 0) 
    {
        while (N >= t) 
        {
            cout << t << endl;
            N -= t;
        }
        t /= S;
    }
    return 0;
}
