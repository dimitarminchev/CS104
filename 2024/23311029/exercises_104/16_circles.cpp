#include<iostream>
#include<cmath>
using namespace std;

int main()

{ 
float x1, y1, x2 , y2, r1, r2 ;
//input
cout << "x1,y1, r1 " << endl;
cin >> x1 >> y1 >> r1;
cout << "x2,y2, r2 "<< endl; 
cin >> x2 >> y2 >> r2;
// maths
float d = sqrt(pow(x2-x1,2)+pow(y2-y1,2));

// output 
if(d> r1+r2) cout << "No common Points" <<endl;
if(d= r1+r2) cout << "1 common Points" <<endl;
if(d< r1+r2) cout << "2 common Points" <<endl;






    return 0;
}
