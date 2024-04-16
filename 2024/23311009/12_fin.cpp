#include <iostream>
using namespace std;
int main ()
{

 int n,sum;
 float total;


 cout << "1,. Interest rate 2.3%" << endl;
 cout << "2,. Interest rate 2.6%" << endl;
 cout << "3,. Interest rate 2.9%" << endl;
 cout << "4,. Interest rate 3.3%" << endl;
 cout << "5,. Interest rate 3.5%" << endl;
 cout << "6,. Interest rate 3.9%" << endl;
 cout << " Please select [1-6]" << endl;
cin >> n;
cout << " Enter amout to invest";

cin >> sum;
switch(n)
{
case1: total = sum + (sum*2.3)/100; break;
case2: total = sum + (sum*2.6)/100; break;
case3: total = sum + (sum*2.9)/100; break;
case4: total = sum + (sum*3.3)/100; break;
case5: total = sum + (sum*3.5)/100; break;
case6: total = sum + (sum*3.8)/100; break;

}
 cout << "Total " << total << endl;
 return 0;

}

