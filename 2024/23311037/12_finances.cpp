#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    float total;

    cout << "1. interest rate 2.3" << endl;
    cout << "2. interest rate 2.6" << endl;
    cout << "3. interest rate 2.9" << endl;
    cout << "4. interest rate 3.3" << endl;
    cout << "5. interest rate 3.6" << endl;
    cout << "6. interest rate 3.8" << endl;
    cout << "Please select [1-6]: ";
    cin >> n;
    cout << "Enter amount to invest:*";
    cin >> sum;

    switch (n)
    {
    case 1 : 
    total = sum + (sum * 2.3)  / 100;
        break;
    case 2 :
     total = sum + (sum * 2.6)  / 100;
        break;
    case 3 :
     total = sum + (sum * 2.9)  / 100;
        break;
    case 4 :
     total = sum + (sum * 3.3)  / 100;
        break;
    case 5 :
     total = sum + (sum * 3.6)  / 100;
        break;
    case 6 :
    total = sum + (sum * 3.8)  / 100;
        break;   
    }
    cout << "Total profit: " << total << endl;
    return 0;
}