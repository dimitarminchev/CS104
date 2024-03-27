// Числата от редицата на Фибоначи
#include <iostream>
using namespace std;

void fibonacci(int n) {
    int a = 0, b = 1;
    cout << "Purvite " << n << " 4islata na redicata na Fibona4i: ";

    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "vuvedete broq na 4islata na Fibona4i: ";
    cin >> n;

    fibonacci(n);

    return 0;
}
