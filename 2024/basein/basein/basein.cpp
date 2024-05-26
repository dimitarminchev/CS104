#include <iostream>

int main() 
{
    int V, D1, D2, D3;

    // Въвеждане на данни
    std::cout << "Въведете обем на басейна (в куб. м): ";
    std::cin >> V;
    std::cout << "Въведете дебит на тръба D1 (в куб. м/ч): ";
    std::cin >> D1;
    std::cout << "Въведете дебит на тръба D2 (в куб. м/ч): ";
    std::cin >> D2;
    std::cout << "Въведете дебит на тръба D3 (в куб. м/ч): ";
    std::cin >> D3;

    // Проверка за отрицателни дебити
    if (D1 < 0 || D2 < 0 || D3 < 0) {
        std::cout << "Грешка: Една от тръбите има отрицателен дебит и изпразва басейна.\n";
        return 1; // Изход с грешка
    }

    // Изчисляване на времето за напълване на басейна
    double time1 = static_cast<double>(V) / D1; // време в часове
    double time2 = static_cast<double>(V) / D2;
    double time3 = static_cast<double>(V) / D3;

    // Избиране на най-малкото време
    double min_time = std::min(std::min(time1, time2), time3);

    // Извеждане на резултата
    std::cout << "Baseina shte se napalni za " << min_time << " chasa.\n";
    return 0;
}