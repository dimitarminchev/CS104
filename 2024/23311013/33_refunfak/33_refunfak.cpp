#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

double fak(int n)

{
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fak(n - 1);
    }
}

int main()
{
    int n;

    print("Enter max number: ");
    cin >> n;
    print(n << "! = " << fak(n));

    return 0;
}