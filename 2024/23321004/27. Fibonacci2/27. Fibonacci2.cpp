//27. Числата от редицата на Фибоначи
#include <iostream>

void generateFibonacci(int limit) {
    int prev = 0, curr = 1;

    std::cout << "Fibonacci numbers up to " << limit << " are: ";
    std::cout << prev << " " << curr << " ";

    while (true) {
        int next = prev + curr;
        if (next > limit)
            break;
        std::cout << next << " ";
        prev = curr;
        curr = next;
    }
}

int main() {
    int limit;
    std::cout << "Enter the limit for Fibonacci numbers: ";
    std::cin >> limit;

    generateFibonacci(limit);

    return 0;
}
