// DR ZAD1 CISTERNA
#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int t = n % 5;
    int s = n / 5;
    if (t == 4) 
    {
        t = 0;
        s++;
    }
    cout << s << " pati dvete kofi." << endl;
    switch (t) 
    {
    case 1: {
        cout << "Ostava 1 litar, mojem da izpolzvame kofata ot 2 litra." << endl;
        break;
    }
    case 2: {
        cout << "Ostavat 2 litra, mojem da izpolzvame kofata ot 2 litra." << endl;
        break;
    }
    case 3: {
        cout << "Ostavat 3 litra, mojem da izpolzvame kofata ot 3 litra." << endl;
        break;
    }
    };
    return 0;
}
