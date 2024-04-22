#include <iostream>
#include <cmath>

using namespace std;

int combinations(int n, int r) {
    return round(tgamma(n + 1) / (tgamma(r + 1) * tgamma(n - r + 1)));
}

int main() {
    int combinations_case1 = combinations(35, 5);
    int combinations_case2 = combinations(42, 6);
    int combinations_case3 = combinations(49, 6);


    cout << "Комбинации за изтегляне на 5 от 35: " << combinations_case1 << endl;
    cout << "Комбинации за изтегляне на 6 от 42: " << combinations_case2 << endl;
    cout << "Комбинации за изтегляне на 6 от 49: " << combinations_case3 << endl;

    return 0;
}