#include<iostream> 
using namespace std;
int main()
{
    int a;
    cin >> a;

    int a1 = (a/1000)%10;
    int a2 = (a/100)%10;
    int a3 = (a/10)%10;
    int a4 = (a/1)%10;

    cout << a4 + a3 + a2 + a1 << endl;
    cout << a4 * a3 * a2 * a1 << endl;
    return 0;

}