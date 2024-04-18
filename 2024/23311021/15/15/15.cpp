#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int fig;
    int a, b;
    float r;
    cout << "choose figure" << endl;
    cout << "1 for square" << endl;
    cout << "2 circle" << endl;
    cout << "3 for rectangle" << endl;
    cin >> fig;
    switch (fig)
    {
    case 1:

        cout << "Enter the side" << endl;
        cin >> a;
        double P = 4 * a;
        double S = a * a;
        cout << "P is: " << P << "S is: " << S << endl;

        break;

    case 2:
        cin >> r;
        float P = 4 * 3.14 * r;
        float s = 3.14 * (r * r);


        cout << "P is: " << P << "S is: " << S << endl;
        break;

    case 3:
        cin >> a;
        cin >> b;
        double P = 2 * a + 2 * b;
        double S = a * b;
        cout << "P is: " << P << "S is: " << S << endl;
        break;
    }



    return 0;
}
