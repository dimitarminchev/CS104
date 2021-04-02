#include <iostream>
using namespace std;
int main()
{
    // Необходими променливи
    float words, a, b, c;

    // Въвеждаме необходимите данни
    cout << "words=?, a=?, b=?, c=?" << endl;
    cin >> words >> a >> b >> c;

    // Изчисляване на цената за телеграмата
    float total = (words-20)>0 ? (a+b+((words-20)*c)) : (a+b);

    // OТпечатваме получения резултат
    cout << "total=" << total << endl;

    return 0;
}
