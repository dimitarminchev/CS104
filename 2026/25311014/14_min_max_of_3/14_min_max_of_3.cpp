#include <iostream>

int main()
{
    int numbers[3], min, max;

    for (int i = 0; i <= 2; i++) { std::cout << "Enter value " << i + 1 << ": "; std::cin >> numbers[i]; } 
    
    max = numbers[0]; 
    min = numbers[0];

    for (int i = 1; i <= 2; i++) 
    { 
        if      (numbers[i] > numbers[0]) { max = numbers[i]; }
        else if (numbers[i] < numbers[0]) { min = numbers[i]; } 
    }

    std::cout << "Max: " << max << "\n"
              << "Min: " << min;
}