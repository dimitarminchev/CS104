#include <iostream>

int main()
{
    int numbers[10]{2, 2, -1, -1, -1, 3, 5, -2, -2, 4}, min, max;
    
    max = numbers[0]; 
    min = numbers[0];

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) 
    { 
        if      (numbers[i] > max) { max = numbers[i]; }
        else if (numbers[i] < min) { min = numbers[i]; } 
    }

    std::cout << "Max: " << max << "\n"
              << "Min: " << min;
}