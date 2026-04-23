#include <iostream>
using namespace std;

int main()
{
    float ec1, ec2, ec5, ec10, ec20, ec50, e1, e2;

    cout << "Kolko 1 EC: ";
    cin >> ec1;

    cout << "Kolko 2 EC: ";
    cin >> ec2;

    cout << "Kolko 5 EC: ";
    cin >> ec5;

    cout << "Kolko 10 EC: ";
    cin >> ec10;

    cout << "Kolko 20 EC: ";
    cin >> ec20;

    cout << "Kolko 50 EC: ";
    cin >> ec50;

    cout << "Kolko 1 E: ";
    cin >> e1;

    cout << "Kolko 2 E: ";
    cin >> e2;

    float total = ec1 * 1 + ec2 * 2 + ec5 * 5 + ec10 * 10
        + ec20 * 20 + ec50 * 50 + e1 * 100 + e2 * 200;

    float total2 = total / 100;

    cout << "Obshto: " << total2 << " EUR" << endl;

    return 0;
}