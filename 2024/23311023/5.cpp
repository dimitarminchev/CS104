#include<iostream>
using namespace std;

// Moneti
// 1 st
// 2 st 
// 5 st
// 10 st
// 20 st
// 50 st
// levche


int main()
{
    float oneC;
    float twoC;
    float fiveC;
    float tenC;
    float twentyC;
    float fiftyC;
    float lev;

    float r;

    cout << "oneC=";
    cin >> oneC;

    cout << "twoC=";
    cin >> twoC;

    cout << "fiveC=";
    cin >> fiveC;

    cout << "tenC=";
    cin >> tenC;

    cout << "twentyC=";
    cin >> twentyC;

    cout << "fiftyC=";
    cin >> fiftyC;

    cout << "lev=";
    cin >> lev;


    float totalCoins = oneC + twoC + fiveC + tenC + twentyC + fiftyC + lev;
    float sum = (oneC + (twoC * 2) + (fiveC * 5) + (tenC * 10) + (twentyC * 20) + (fiftyC * 50) + (lev * 100)) / 100;
    
    
    

    cout << "totalCoins=" << totalCoins << endl;
    cout << "sum=" << sum << endl;
    

    return 0;
}