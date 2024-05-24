// DR ZAD6 TRICIFRENI
#include <iostream>
using namespace std;

int main() 
{
    int c;
    cin >> c;
    for (int i = 1; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k < 10; k++) {
                if ((i + j + k) == c) {
                    cout << i << j << k << " ";
                }
            }
        }
    }
    cout << endl;
    return 0;
}
