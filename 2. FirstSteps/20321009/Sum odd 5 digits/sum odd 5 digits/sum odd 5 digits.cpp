// Сума от цифрите на нечетни позиции на 5 цифрено число

#include <iostream>
using namespace std;
int main()
{   
    // Променлива а
    int a;
    
    
    // Въвеждане на число
    cout << "a=?" << endl;
    cin >> a;
    
    
    // Изчисления 
    int a1 = (a / 10000) % 10;
    int a3 = (a / 100) % 10;
    int a5 = (a / 1) % 10;
    
    // Резултат 
    int sum = a1 + a3 + a5;
    cout << "Sum: " << sum << endl;
    return 0;
}
