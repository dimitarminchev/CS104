#include
using namespace std;
int main()
{
    int n, y, x, c;
    cout << " Wawedete 4islo n :  ";
    cin >> n;
    for (y = 0; y < n; y++) //Брояча е до числото което сте въвели
    {
        c = 1;
        cout.width(n - y);// показва това
        for (x = 0; x <= y; x++)
        {
            cout << c << "   ";
            c = c * (y - x) / (x + 1);
        }
        cout <
    }
    cout < return 0;
}