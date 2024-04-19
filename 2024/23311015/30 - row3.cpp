#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n;
    cout << "Enter max number: " << endl;
    cin >> n;
    
    for (int i = 1; i <= n; i++)
    {
        float a = pow((1.0 + (1.0 / i)),i);
        cout << a << " ";
    }
    return 0;
}