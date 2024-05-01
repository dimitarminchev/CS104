//fibonacci2
#include <iostream>
using namespace std;
void generateFibonacci(int N) {
    int first = 0, second = 1;
    cout << " " << N << ":" << endl;
    cout << first << " " << second << " ";
    for (int i = 2; i < N; ++i) {
        int next = first + second;
        cout << next << " ";
        first = second;
        second = next;
    }
    cout << endl;
}
int main() {
    int N;
    cout <<" ";
    cin >> N;
    if (N <= 0) {
        cout << " " << endl;
        return 1;
    }
    generateFibonacci(N);
    return 0;
}