#include<iostream>
using namespace std;
int main()
{
 float n;
 cout << "Enter max number: " << endl;
 cin >> n;
 
 for (int i = 1; i <= n; i++)
 {
    float a = 1.0 / i;
    cout << a << " ";
 }
 return 0;
}