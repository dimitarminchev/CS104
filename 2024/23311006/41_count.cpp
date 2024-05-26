#include <iostream>
using namespace std;
int main()
{
    int n, x, count=0;
    cout<<"n:";
    cin >> n;
    cout<<"x:";
    cin >> x;

    int a[100];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]==x) count++;
    }

    cout << x << " repeats " << count << " times."<< endl;
    return 0;
}
