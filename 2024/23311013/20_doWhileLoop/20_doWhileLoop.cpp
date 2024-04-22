#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int a = 1;
    do
    {
        print(a << " ");
        a++;
    } while (a <= 100);
    cout << endl;
    return 0;
}