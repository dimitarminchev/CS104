#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int sum = 0;
    for (int k = 1000; k <= 9999; k++)
    {
        int a = (k / 1000) % 10;
        int b = (k / 100) % 10;
        int c = (k / 10) % 10;
        int d = (k / 1) % 10;


        if ((d + c) == (b + a))
        {
            print(k << "");
            sum = sum + 1;



        }

    }
    print("The sum of the number is: " << sum);

    return 0;
}