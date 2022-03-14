#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int menu;
    float p,p2, s, a,b,c;
    cout << "1.Circle" << endl;
    cout << "2.Triangle" << endl;
    cout << "3.Square" << endl;
    cout << "  Select figure: ";
    cin >> menu;
    if (menu == 3)
    {
        cout << "Chosen: Square" << endl;
        cout << "a=?"<<endl;
        cin >> a;
        p = 4 * a;
        s = a * a;
        cout << "P=" << p << endl << "S=" << s << endl;
    }
    if (menu == 2)
    {
        cout << "Chosen: Triangle" << endl;
        cout << "a=?, b=?, c=?" << endl;
        cin >> a >> b >> c;
        p = a+b+c;
        p2 = p / 2;
        s = sqrt(p2*(p2-a)*(p2-b)*(p2-c));
        cout << "P=" << p << endl << "S=" << s << endl;
    }
    if (menu == 1)
    {
        cout << "Chosen: Circle" << endl;
        cout << "r=?" << endl;
        cin >> a;
        p = 2 * 3.14 * a;
        s = 3.14 * a * a;
        cout << "P=" << p << endl << "S=" << s << endl;
    }
    return 0;
}