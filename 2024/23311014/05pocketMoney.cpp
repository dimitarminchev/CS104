#include<iostream>
using namespace std;

// Trqbva da vuveda kolko moneti imam on 
// 1 stotinka
// 2 stotinki 
// 5 stotinki
// 10 stotinki
// 20 stotinki
// 50 stotinki


int main()
{
    float oneM;
    float twoM;
    float fiveM;
    float tenM;
    float twentyM;
    float fiftyM;
    float lev;

    float r;

    cout << "oneM=";
    cin >> oneM;

    cout << "twoM=";
    cin >> twoM;

    cout << "fiveM=";
    cin >> fiveM;

    cout << "tenM=";
    cin >> tenM;

    cout << "twentyM=";
    cin >> twentyM;

    cout << "fiftyM=";
    cin >> fiftyM;

    cout << "lev=";
    cin >> lev;


    float totalCoins = oneM + twoM + fiveM + tenM + twentyM + fiftyM + lev;
    float sum = (oneM + (twoM * 2) + (fiveM * 5) + (tenM * 10) + (twentyM * 20) + (fiftyM * 50) + (lev * 100)) / 100;
    
    
    

    cout << "totalCoins=" << totalCoins << endl;
    cout << "sum=" << sum << endl;
    

    return 0;
}