#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n, sum;
    float total;
    cout << "Interest rate is 2.3" << endl;
    cout << "Interest rate is 2.6" << endl;
    cout << "Interest rate is 2.9" << endl;
    cout << "Interest rate is 3.3" << endl;
    cout << "Interest rate is 3.5" << endl;
    cout << "Interest rate is 3.9" << endl;

    cout << "Please select an option from 1 to 6" << endl;
    cin >> n;
    cout << "Enter the amount of money" << endl;
    cin >> sum;
    switch (n) {
    case 1: total = sum + (sum + 2.3) / 100; break;
    case 2: total = sum + (sum + 2.6) / 100; break;
    case 3: total = sum + (sum + 2.9) / 100; break;
    case 4: total = sum + (sum + 3.3) / 100; break;
    case 5: total = sum + (sum + 3.5) / 100; break;
    case 6: total = sum + (sum + 3.9) / 100; break;
        cout << "Total profit =" << total;
    }




    return 0;
}
