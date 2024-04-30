#include <iostream>
#include <cmath> 

using namespace std; 

int main()
{
    float n = 0;
    cin >> n; 
    
    for(float i = 1; i <= n;i++)
    {
      cout << pow((1.0 + 1.0/i),1) << endl;
    }

    return 0;
}