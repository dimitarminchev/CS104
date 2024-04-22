#include <iostream>
#include <cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n, x, count = 0;

    print("n: ");
    cin >> n;
    print("x: ");
    cin >> x;

    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == x) count++;
    }

    print(x << " repeats " << count << " times")

    return 0;
}