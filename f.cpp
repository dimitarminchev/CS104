
#include<iostream>
using namespace std;
int main() 
{
    int a, b;    
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
         if(i % 15 == 0) cout << "fizzbuzz ";
         else if(i % 5 == 0) cout << "buzz ";
         else if(i % 3 == 0) cout << "fizz ";
         else cout << i << " ";
    }

    cout << endl;
    return 0;
}
