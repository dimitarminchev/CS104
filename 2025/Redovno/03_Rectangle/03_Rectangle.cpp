#include <iostream> 
using namespace std;
int main()
{
    // Деклариране на две целочислени променливи
    int a, b;

    // Молим потребителя да въведе а
    cout << "a=";
    cin >> a;

    // Молим потребителя да въведе b
    cout << "b=";
    cin >> b;

    // Периметър 
    int p = 2 * (a + b);
    cout << "p=" << p << endl;

    // Лице 
    int s = a * b;
    cout << "s=" << s << endl;

    // Край на програмата
    return 0;
}
