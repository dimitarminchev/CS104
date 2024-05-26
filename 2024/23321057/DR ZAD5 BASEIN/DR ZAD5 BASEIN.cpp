// DR ZAD5 BASEIN
#include <iostream>
using namespace std;

int main() 
{
    int V, D1, D2, D3;
    cin >> V >> D1 >> D2 >> D3;
    int t = V / (D1 + D2 + D3);
    cout << t << endl;
    if ((D1 < 0) || (D2 < 0) || (D3 < 0)) {
        cout << "Edna ot trabite izprazva baseina." << endl;
    }
    return 0;
}
