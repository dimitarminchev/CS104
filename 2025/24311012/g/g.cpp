#include <iostream>

unsigned long long factorial(int n) {
	usigned long long result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}

int main() {
	int n;
	std::cin >> n;

	if (n < 0) {
		std::cout << " " << std::endl;
	}
	else {
		std::cout << " " << n << " e: " << factorial(n) << std::endl;
	}
	return 0;
}
