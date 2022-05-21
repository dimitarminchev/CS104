// 3. rectangle
#include <iostream>
using namespace std;
int main()
{
    //променлливи тип float
    float a, b, p, s;

    //страни
    cout << "a=?, b=?" << endl;
    cin >> a >> b;

    //лице и периметър
    p = 2 * (a + b);
    s = a * b;

    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
}
