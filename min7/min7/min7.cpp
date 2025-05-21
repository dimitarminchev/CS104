#include <iostream>
using namespace std;

int main() {
    int digit[5];
    for (int i = 0; i < 5; i++) {
        cin >> digit[i];
    }

    int min = -1;

    for (int i = 0; i < 5; i++) {        
        for (int j = 0; j < 5; j++) {    
            for (int k = 0; k < 5; k++) { 
                int num = digit[i] * 100 + digit[j] * 10 + digit[k];
                if (num % 7 == 0) {
                    if (min == -1 || num < min)
                        min = num;
                }
            }
        }
    }

    cout << min << endl;
    return 0;
}
