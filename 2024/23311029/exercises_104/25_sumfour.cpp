#include <iostream>
using namespace std;
    int main()
    {
        int sum = 0;
        for (int k = 1000; k <= 9999; k++)
        {
            int a= (k / 1000) % 10;
            int b= (k / 100) % 10;
            int c= (k / 10) % 10;
            int d= (k / 1) % 10;

            
            if ((d+c) == (b+a)) 
            {
              cout << k << "";
              sum = sum + 1;



            }  
    
        }
    cout << endl << "The sum of the number is:" << sum;

        return 0;
    }
