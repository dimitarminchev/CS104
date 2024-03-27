#include <iostream>

int main() {
	    double radius;
	        const double pi = 3.14159;

		    std::cout << "Enter the radius of the circle: ";
		        std::cin >> radius;

			    float area = pi * radius * radius;
			    float p = 2 * pi * radius;
			    float v = (4 * pi * radius * radius * radius) / 3;


			        std::cout << "The area of the circle is: " << area << std::endl;
			    	std::cout << "The perimeter of the circle is: " << p << std::endl;
				std::cout << "The volume of the circle is: " << v << std::endl;
				    return 0;
}

