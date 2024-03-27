#include<iostream>

using namespace std;

int main() {
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "The perimeter of the circle is " << 2 * 3.14159 * radius << endl;
    cout << "The area of the circle is " << 3.14159 * radius * radius << endl;
    cout << "The volume of the circle is " << (4 * 3.14159 * radius * radius * radius) / 3 << endl;

    return 0;
}
