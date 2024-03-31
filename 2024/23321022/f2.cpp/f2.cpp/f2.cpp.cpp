#include <iostream>
#include <cmath>

using namespace std:

int main()
{
    int n;
    long long int result = 0;

    cout << "Please, could you tell me the limit of number row?" << endl;
    cin >> n;
    
    for (unsigned int i = 1; i <= n; i++)
    {
        result += pow(-1, n) * pow(i, n);

    }

    cout << "the sum is" << result << endl;

    return 0;
}


