// #include <iostream>
using namespace std;

// do_while.cpp = Цикличен алгоритъм с постусловие

int main() {
    int n;
    cout << "Enter a positive integer n: ";
    cin >> n;

    int i = 1;
    do {
        cout << i << " ";
        i++;
    } while(i <= n);

    cout << endl;
    return 0;
}
