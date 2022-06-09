#include <iostream>
int main() {
    const int N = 7;
    int Array[N];
    std::cout << "Моля въведете " << N << " числата: ";
    for (int i = 0; i < N; i++) {
        std::cin >> Array[i];
    }

    int min = Array[0], max = Array[0];
    for (int i = 1; i < N; i++) {
        if (Array[i] < min)
            min = Array[i];
        if (Array[i] > max)
            max = Array[i];
    }
    std::cout << "min = " << min << std::endl;
    std::cout << "max = " << max << std::endl;
    return 0;
}