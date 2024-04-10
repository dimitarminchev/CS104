#include<iostream>
using namespace std;
int main()
{
    int m01, m02 , m05 , m10 , m20 , m50 , m1 ;

    cout << " Broi moneti ot 1 stotinka = ";
    cin >> m01;
    cout << " Broi moneti ot 2 stotinki = ";
    cin >> m02;
    cout << "Broi moneti ot 5 stotinki = " ;
    cin >> m05;
    cout << " Broi moneti ot 20 stotinki= ";
    cin >> m10;
    cout << "Broi moneti ot 50 stotinki= " ;
    cin >> m50;
    cout << "Broi moneti ot 1 lev= " ;
    cin >> m1; 

    float sum = m01*0.01+m01*0.02+m05*0.05+m10*0.1+m20*0.2+m50;
    float count = m01+m02+m05+m10+m20+m50+m1;
    cout << "suma = " << sum << endl ;
    cout << "Broi = " << count << endl;

    return 0;

}







