#include<iostream>
using namespace std;
int main()
{
    int m01, m02, m05, m10, m20, m50, m1;

    cout << "Брой монети от 1 стoтинка =";
    cin >> m01;
    cout << "Брой монети от 2 стoтинки =";
    cin >> m02;
    cout << "Брой монети от 5 стoтинки =";
    cin >> m05;
    cout << "Брой монети от 10 стoтинки =";
    cin >> m10;
    cout << "Брой монети от 20 стoтинки =";
    cin >> m20;
    cout << "Брой монети от 50 стoтинки =";
    cin >> m50;
    cout << "Брой монети от 1 лев =";
    cin >> m1;

    float sum = m01*0.01+m02*0.02+m05*0.05+m10*0.1+m20*0.2+m50*0.5+m1;
    float count = m01+m02+m05+m10+m20+m50+m1;

    cout << "Сума = " << sum << endl;    
    cout << "Брой = " << count << endl;    

    return 0;
}