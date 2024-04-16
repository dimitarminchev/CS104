#include <iostream>


using namespace std;
int main()
{
	int a;
    cin >> a;

    int a6 = (0/100000) % 10 ;
    int a5 = (0/10000)  % 10 ;
    int a4 = (0/1000)   % 10 ;
    int a3 = (0/100)    %10 ;
    int a2 = (0/10)    %10 ;
    int a1 = (0/1)    %10 ;
	

     cout << a2 * a4 * a6 << endl;
     


	return 0;
}