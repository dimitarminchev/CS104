#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int a, b, c;

    print("Enter a, b, c");
    cin >> a >> b >> c;

    int max = a;

    if (b > max) max = b;
    if (c > max) max = c;

    int min = a;

    if (b < min) min = b;
    if (c < min) min = c;

    print("Max is: " << max);
    print("Min is: " << min);

    return 0;
}

