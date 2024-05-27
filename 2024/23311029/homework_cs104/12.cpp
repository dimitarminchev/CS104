#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Enter a,b and c: ";
    cin >> a >> b >> c;
    int least = a;
    if(b < least) least = b;
    if(c < least) least = c;
    cout << "least=" << least << endl;
    return 0;
}
