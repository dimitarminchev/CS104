#include <iostream>


using namespace std; 



int power (int chastno,int chislo)
{
    if(chastno==1) return chislo;
    return chislo * power(chastno-1,chislo);
}

int main()
{
    
    int chastno;
    int chislo;

    cout << "your num?" << endl;
    cin >> chislo;
    cout << "pow?" << endl;
    cin >> chastno;
    
    cout << power(chastno,chislo) << endl;
    return 0;

}