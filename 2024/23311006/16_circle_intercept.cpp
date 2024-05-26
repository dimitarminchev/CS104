#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float x1, y1, x2, y2, r1, r2;
    
   
    cout << "x1 y1 r1" << endl;
    cin >> x1 >> y1 >> r1;
    cout << "x2 y2 r2" << endl;
    cin >> x2 >> y2 >> r2;

   
    float d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    

    if(d > r1 + r2)  cout << "No Common Points" << endl;
    if(d == r1 + r2) cout << "1 Common Points" << endl;
    if(d < r1 + r2)  cout << "2 Common Points" << endl;

    return 0;
}
