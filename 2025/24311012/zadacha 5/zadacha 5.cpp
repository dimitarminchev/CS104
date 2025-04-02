#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a;
    cin >> b;

  
    for (int i = a; i <= b; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << endl;  
        }
        else if (i % 3 == 0) {
            cout << endl; 
        }
        else if (i % 5 == 0) {
            cout << endl;  
        }
        else {
            cout << i << endl; 
        }
    }

    return 0;
}
