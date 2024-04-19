#include <iostream>
#include <cmath>

using namespace std; 

int main()
{
   int N = 35;
   int K = 5;
   int totalN = 1;
   int totalK = 1;

   for(int i = 1;i <= N;i++)
   {
    totalN = totalN * i; 
   }

   for(int d = 1;d <= K;d++)
   {
    totalK = totalK * d; 
   }



return 0;
   
}