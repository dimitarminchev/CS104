#include <iostream>
#include <cmath>

using namespace std; 

// int main()
// {
//    int a = 5;
//    int total = 1;

//    for(int i = 1;i <= a;i++)
//    {
//     total = total * i; 
//    }

// cout << total << endl; 
// return 0;
   
// }

int fak(int n)
{
    if(n==1) return 1;
    else return n*fak(n-1);
}

int main()
{
  int n;
  cout << "Enter max number: " << endl;
  cin >> n;
  cout << fak(n) << endl;
  return 0;
}



