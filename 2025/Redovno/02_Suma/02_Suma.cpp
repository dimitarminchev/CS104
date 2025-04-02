#include <iostream> 
using namespace std;
int main()
{
    // Деклариране на две целочислени променливи
    int a,b;

    // Молим потребителя да въведе а
    cout << "a=";
    cin >> a;

    // Молим потребителя да въведе b
    cout << "b=";
    cin >> b;

    // Как да намерим сумата?
    int c = a + b;
    cout << "a+b=" << c << endl;

    return 0;
}
