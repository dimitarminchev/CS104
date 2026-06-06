#include <iostream>

int main()
{
    int numbers[3], min, max;

    for (int i = 0; i <= 2; i++) { std::cout << "Enter value " << i + 1 << ": "; std::cin >> numbers[i]; } 
    
    max = numbers[0]; 
    min = numbers[0];

    for (int i = 1; i <= 2; i++) 
    { 
        if      (numbers[i] > max) { max = numbers[i]; }
        else if (numbers[i] < min) { min = numbers[i]; } 
    }

    std::cout << "Max: " << max << "\n"
              << "Min: " << min;
}