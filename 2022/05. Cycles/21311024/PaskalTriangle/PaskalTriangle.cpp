#include
using namespace std;
int main()
{
    int n, y, x, c;
    cout << " Въведете числото 'n' :  ";
    cin >> n;
    for (y = 0; y < n; y++)
    {
        c = 1;
        cout.width(n - y);
        for (x = 0; x <= y; x++)
        {
            cout << c << "   ";
            c = c * (y - x) / (x + 1);
        }
        cout <
    }
    cout < return 0;
}