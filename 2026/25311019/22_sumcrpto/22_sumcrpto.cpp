#include <iostream>
using namespace std;
int main() {
    int n = 10;
    // Формулата на Гаус: (първото + последното) * броя на двойките
    int sum = (1 + n) * (n / 2);

    cout << "Sum: " << sum << endl;
    return 0;
}