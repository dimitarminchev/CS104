// E_task.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int a, m, speed, m_start, t_m, t_a;
    cin >> speed >> a >> m >> m_start;



    t_m = ((m * 1024) - (8 * 256)) / (speed / 2);
    t_a = ((a * 1024) - (t_m * (speed / 2))) / speed;
    t_a = t_a + t_m;
    t_m = t_m + m_start;
    cout << t_a << " " << t_m;

    return 0;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
