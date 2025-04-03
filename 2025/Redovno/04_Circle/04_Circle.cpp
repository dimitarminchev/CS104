// Намиране на лице, периметър и обем на кръг и сфера
#include <iostream> 
using namespace std;
int main()
{
    // Деклариране променлива с плаваща запетая
    float r;

    // Молим потребителя да въведе r
    cout << "r=";
    cin >> r;

    // Периметър, Лице и Обем
    float p = 2 * 3.1415 * r;
    float s = 3.1415 * r * r;
    float v = (4.0/3.0) + 3.1415 * r * r * r;

    // Отпечатваме резултата
    cout << "p=" << p << endl;
    cout << "s=" << s << endl;
    cout << "v=" << v << endl;

    // Край на програмата
    return 0;
}
