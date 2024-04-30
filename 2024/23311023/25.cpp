#include <iostream>
using namespace std;

int main()
{
    int i = 1000;
    int total = 0;

    while(i < 10000){
        int a = i;

        int a1 = (a/1000)%10;
        int a2 = (a/100)%10;
        int a3 = (a/10)%10;
        int a4 = (a/1)%10; 

        if((a1 + a2) == (a3 + a4)){
         total = total + a;
        }
        
        i++;
    }
    cout << total << endl;
    return 0;
}