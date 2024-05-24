// DR ZAD7 MAISTOR TRICHKO
#include <iostream>
using namespace std;

int main() 
{
    int z;
    cin >> z;
    int Lm = 0;
    int Wm = 0;
    for (int i = 0; i < z; i++) 
    {
        int l, w;
        cin >> l >> w;
        Lm += l;
        if (w > Wm) 
        {
            Wm = w;
        }
    }
    cout << "Daljina = " << Lm << endl;
    cout << "Schirina = " << Wm << endl;
    return 0;
}
