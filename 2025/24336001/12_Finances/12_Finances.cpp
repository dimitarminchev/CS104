#include <iostream>
using namespace std;
int main()
{
    float rate, invest;
    
    cout << "Bank interest rates :" << endl;
    cout << "1. 2,3%" << endl;
    cout << "2. 2,6%" << endl;
    cout << "3. 2,9%" << endl;
    cout << "4. 3,3%" << endl;
    cout << "5. 3,5%" << endl;
    cout << "6. 3,8%" << endl;
    cout << "Please, select from 1 to 6:";
    cin >> rate;
    cout << "Enter sum to invest =";
    cin >> invest;

    if (rate == 1) invest = invest + (invest * 2.3) / 100;
    if (rate == 2) invest = invest + (invest * 2.6) / 100;
    if (rate == 3) invest = invest + (invest * 2.9) / 100;
    if (rate == 4) invest = invest + (invest * 3.3) / 100;
    if (rate == 5) invest = invest + (invest * 3.5) / 100;
    if (rate == 6) invest = invest + (invest * 3.8) / 100;

    cout << "Investme with rate = " << invest << endl;
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
