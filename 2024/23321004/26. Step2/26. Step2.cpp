//26. Рекурсивна функия за степен на двойката до зададено число
#include <iostream>

void powersOfTwo(int n, int power = 1) {
    
    if (power > n)
        return;

        std::cout << power << " ";

        powersOfTwo(n, power * 2);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Powers of two up to " << num << " are: ";
    powersOfTwo(num);

    return 0;
}
