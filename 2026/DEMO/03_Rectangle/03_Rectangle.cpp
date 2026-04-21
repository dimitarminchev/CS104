#include <iostream>
using namespace std;
int main()
{
    // Декларираме две целочислени променливи, наречени а и б
    int a, b;

    // Въвеждане на стойност за а
    cout << "a=";
    cin >> a;

    // Въвеждане на стойност за б
    cout << "b=";
    cin >> b;

    // Смятаме периметър лице
    int p = 2 * (a + b);
    int s = a * b;

    // Извеждаме шполучения резилтат
    cout << "p=" << p << endl;
    cout << "s=" << s << endl;

    return 0;
}