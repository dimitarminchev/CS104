#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;

  int trib [100] = {0,1,1,2} ;
  for (int  i = 4; i < n; i++)
  {
     trib [i] = trib[i-3] + trib[i-2] + trib [i-1];

  }
  
 for (int a = 0; a < n; a++)
 {
    cout << trib[a] << endl;

 }
    return 0;
}
