// Рекурсивна функия за степен на двойката до зададено число
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    int n;
    cout << "Въведете число: ";
    cin >> n;

    double result = pow(2, n);

    cout << "2 на степен " << n << " = " << result << endl;

    return 0;
}
