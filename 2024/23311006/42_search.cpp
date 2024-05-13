#include <iostream>
using namespace std;
int main()
{
    int n, s;
    cout<<"n:";
    
    cin >> n;
    cout<<"s:";
    
    cin >> s;
    
    int a[100];
    for (int i = 0; i < n; i++)
  {
        cin >> a[i];
        if (a[i]==s) cout << i << " ";        
        
  }

    return 0;
}
