//Въвеждайки две числа a и b, изведете всички числа в интервала от а до b, ако числото се дели на три, то изведете "fizz", 
// ако се дели на пет, то изведете "buzz", ако се дели едновременно на три и пет, то изведете "fizzbuzz".
//Примерен вход :1 20
//Примерен изход :1 2 fizz 4 buzz fizz 7 8 fizz buzz 11 fizz 13 14 fizzbuzz 16 17 fizz 19 buzz
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    for (int k = 1; k <= 20; k++)
    {
        int a = (k / 10) % 10;
        int b = (k / 1) % 10;
        if (k % 3 == 0) 
        {
            cout << "fizz" << " ";
        }
        else  if  (k % 5 == 0)
        {
            cout << "buzz" << " ";
                
        }
        
         else if ((k % 3 == 0) && (k % 5 == 0))
        { 
            
        }

                    
         cout << k << " ";
    }
    return 0;
}