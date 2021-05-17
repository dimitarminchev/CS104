//Сума от цифрите на четните позиции на шест цифрено число

#include<iostream>
#include<cmath>
using namespace std;
int main()

{
    int b;

    cout << "b=";
    cin >> b;

    int b1 = (b / 100000) % 10;
    int b2 = (b / 10000) % 10;
    int b3 = (b / 1000) % 10;
    int b4 = (b / 100) % 10;
    int b5 = (b / 10) % 10;
    int b6 = (b / 1) % 10;


    int sum = b2 * b4 * b6;

    cout << sum << endl;



    return 0;

}