#include <iostream>


using namespace std; 



int power (int chastno,int y)
{
    if(chastno==1) return y;
    return y * power(chastno-1,y);
}

int main()
{
    
    int chastno;
    int y;

    cout << "your num?" << endl;
    cin >> y;
    cout << "pow?" << endl;
    cin >> chastno;
    
    cout << power(chastno,y) << endl;
    return 0;

}