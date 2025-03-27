// combinations.cpp = Комбинаторика: 5:35, 6:42, 6:49

#include <iostream>
using namespace std;

//  - 5 from 35  -> C(35, 5)
//  - 6 from 42  -> C(42, 6)
//  - 6 from 49  -> C(49, 6)
//
// The formula for combinations: C(n, k) = n! / (k! * (n-k)!)

long long factorial(int n) {
    if(n <= 1) return 1;
    return n * factorial(n - 1);
}

long long combinations(int n, int k) {
    return factorial(n) / (factorial(k) * factorial(n - k));
}

int main() {
    cout << "C(35, 5) = " << combinations(35, 5) << endl;
    cout << "C(42, 6) = " << combinations(42, 6) << endl;
    cout << "C(49, 6) = " << combinations(49, 6) << endl;
    return 0;
}
