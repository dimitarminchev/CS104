#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a;

    cout << "Please enter your income for 2016" << endl;
    cin >> a;
    if (a <= 2160)
    {
        cout << a;
    }
    else if (a <= 3000)
    {
        double tax = ((a - 2160) / 100) * 18;
        cout << "Your tax is " << tax;
    }
    else if (a <= 7200)
    {

        double tax = 168 + (((a - 3000) / 100) * 20);
        cout << "Your tax is " << tax;
    }
    else if (a > 7200)
    {
        double tax = 1072 + (((a - 7200) / 100) * 22);
        cout << "Your tax is " << tax;
    }


    return 0;
}
