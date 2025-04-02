#include <iostream>

int sumOfDigits(int num) {
	int sum = 0;
	while (num > 0) {
		sum += num % 10;
		num /= 10;
	}
	return sum;
}
int main() {
	int n;
	std::cin >> n;

	if (n < 10 || n > 99) {
		return 1;
	}
	int totalSum = 0;
	for (int i = 10; i <= n; i++) {
		totalSum += sumOfDigits(i);
	}
	std::cout << totalSum << std::endl;
	return 0;
}