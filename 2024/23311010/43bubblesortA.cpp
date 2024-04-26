#include<iostream>
using namespace std;
int main()
{
    int n, curNum;
    cout<<"n:";
    cin>> n;
    int a[100];

for (int i = 0; i < n; i++)
{
    cin >> a[i]
}
for (int i = 0; i < n-1; i++)
{
    for (int j = 0; j < (n - 1 - i); j++)
    {
        if(a[i] > a[i + 1])
        {
            curNum = a[i]
            a[i] + a[i + 1];
            a[i + 1] = curNum;
        }
    }
}
For (int i = 0; i < n; i++)
{
    cout << a[i] << " ";
}
return 0;
}