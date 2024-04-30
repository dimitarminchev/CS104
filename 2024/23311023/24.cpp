#include <iostream>
using namespace std;

int main()
{
    int i = 100;
    int a = 0;
    while (i < 1000)
    {
        if(i%3==0){
            if(i%5 == 0){
                a = i + a;
            }
        }
        i++;
    }
    cout << a << endl;
    return 0;
}