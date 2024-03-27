 #include <iostream>

int main() {
	    int number;
	        
	        std::cout << "Enter a number: ";
		    std::cin >> number;

		        int sum = 0;
			    int product = 1;
			        int digit;
				    
				    while (number > 0) {
					            digit = number % 10;
						            sum += digit;
							            product *= digit;
								            number /= 10;
									        }

				        std::cout << "Sum of digits: " << sum << std::endl;
					    std::cout << "Product of digits: " << product << std::endl;

					        return 0;
}

