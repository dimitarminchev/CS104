#include <iostream>
double fak(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fak(n - 1);
}
int main() {
    double C_5_35 = fak(35) / fak(5) * fak(35 - 5);
    std::cout << "Комбинации = " << C_5_35 << std::endl;
    return 0;
}