#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Vuvedi dvucifreno chislo, kratno na 3: ";
    cin >> n;

    while (n != 153)
    {
        int temp = n;
        int sum = 0;

        while (temp > 0)
        {
            int digit = temp % 10;
            sum += digit * digit * digit;
            temp /= 10;
        }

        n = sum;
        cout << n << endl;
    }

    system("pause");
    return 0;
}
