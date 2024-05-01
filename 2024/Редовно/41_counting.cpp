#include <iostream>
using namespace std;
int main()
{
    // Input
    int n, x, count=0;
    cout<<"n:";
    cin >> n;
    cout<<"x:";
    cin >> x;

    // Input 
    int a[100];
    for (int i = 0; i < n; i++)
    {
        // Numbers in the array
        cin >> a[i];
        // If we find a match the increase the counter
        if(a[i]==x) count++;
    }

    // Print
    cout << x << " repeats " << count << " times."<< endl;
    return 0;
}