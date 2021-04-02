#include <iostream>

int main()
{
    int space, hours, minutes, seconds;
    std::cout << "Space: ";
    std::cin >> space;
    std::cout << "Hours: ";
    std::cin >> hours;
    std::cout << "Minutes: ";
    std::cin >> minutes;
    std::cout << "Seconds: ";
    std::cin >> seconds;

    int sum = seconds + (minutes * 60) + (hours * 3600);

    if (sum >= space / 1024) {
        std::cout << "No space";
    }
    else {
        std::cout << "Has space";
    }
}