#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

double fak(int n)

{
    if (n == 1)
        return 1;

    else return n * fak(n - 1);

}


int main()
{
    double n, k;

    print("n= ");
    cin >> n;
    print("k= ");
    cin >> k;
    print(fak(n) / (fak(k) * fak(n - k)));

    return 0;
}