#include <iostream>
#include <cmath>

using namespace std; 



// int main()
// {
//     int n = 5;
//     int result = 2;

//     result = (pow(result,n));

//     cout << result;
//     return 0;
// }

int main()
{
    int n = 5;
    cin >> n;
    int result = 2;
    for(int i = 1; i < n; i++)
    {
        result = result*2;
    };

    cout << result;
    return 0;

}