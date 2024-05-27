#include <iostream>


using namespace std;
int main()
{
	int a;
    cin >> a;

    int a1 = (0/10000) % 10 ;
    int a2 = (0/1000)  % 10 ;
    int a3 = (0/100)   % 10 ;
    int a4 = (0/10)    %10 ;
    int a5 = (0/1)    %10 ;

	

     cout << a1  + a3 + a5 << endl;
     


	return 0;
}