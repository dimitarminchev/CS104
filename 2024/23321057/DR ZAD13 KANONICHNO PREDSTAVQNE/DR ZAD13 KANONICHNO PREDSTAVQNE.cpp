// DR ZAD13 KANONICHNO PREDSTAVQNE
#include <iostream>
using namespace std;

int main() 
{
    int N;
    cin >> N;
    int i = 2;
    while (N > 1) 
    {
        while (N % i == 0) {
            cout << i << " ";
            N /= i;
        }
        i++;
    }
    cout << endl;
    return 0;
}
