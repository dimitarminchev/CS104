#include <iostream>
#include <cmath>
using namespace std; 

int main()
{
    float n = 0;
    cin >> n; 
    
    

    for(float i = 1; i <= n;i++)
    {
      cout << 1/pow(i,2) << endl;
    }

    return 0;
}