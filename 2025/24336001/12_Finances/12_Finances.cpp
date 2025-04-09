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

