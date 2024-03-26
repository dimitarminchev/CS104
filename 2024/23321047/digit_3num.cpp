#include <iostream>

int main() {
	    int number;
	        
	        std::cout << "Enter a number: ";
		    std::cin >> number;

		        int reversedNumber = 0;
			    while (number > 0) {
				            int digit = number % 10;
					            reversedNumber = reversedNumber * 10 + digit;
						            number /= 10;
							        }

			        std::cout << "Reversed number: " << reversedNumber << std::endl;

				    return 0;
}

