#include <iostream> 
#include <cmath>
using namespace std;
int main ()
{
    float investment;
    cout << "Please enter the sum you want to invest:" << endl;
    cin >> investment;

    int menu;
    cout << "Select rate:" << endl;
    cout << "1) 2%" << endl;
    cout << "2) 3%" << endl;
    cout << "3) 4%" << endl;
    cout << "4) 5%" << endl;
    cout << "Choose:" << endl;
    cin >> menu;

    float finalresult;
    if (menu == 1) finalresult = investment + (investment * 0.02);
     if (menu == 2) finalresult = investment + (investment * 0.03);
      if (menu == 3) finalresult = investment + (investment * 0.04);
       if (menu == 4) finalresult = investment + (investment * 0.05);
    cout << "Receive: " << finalresult << endl;



    return 0;
}