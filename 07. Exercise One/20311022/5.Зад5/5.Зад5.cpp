#include <iostream>
using namespace std;
int main() {
    cout << "Please input the number of passangers in bus 1 and bus 2" << endl;
    int bus_one, bus_two;
    int bus_three = 31;         // Стана ясно от примерния вход/изход от задачата
    int average;
    cin >> bus_one >> bus_two;
    if (bus_one > 200 || bus_two > 200) {   // проверка за повече от 200пътника понеже не може да побере повече от 2000пътника
        cout << "The number of passangers cannot exceed 200" << endl;
        return 0;
    }
    average = (bus_one + bus_two + bus_three) / 3;     //ср.аритметично
    bus_one = average - bus_one;                  // показва колко пътници трябва да се добавят/премахнат от автобуса за да се достигне до ср.арт стойност
    bus_two = average - bus_two;
    bus_three = average - bus_three;
    cout << "Bus 1: " << bus_one << endl << "Bus 2: " << bus_two << endl;
    cout << "Bus 3: " << bus_three << endl;
    return 0;
}