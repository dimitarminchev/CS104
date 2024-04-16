#include <iostream>


using namespace std;
int main()
{
	int a;
    cin >> a;

    int a1 = (0/1000) % 10 ;
    int a2 = (0/100)  % 10 ;
    int a3 = (0/10)   % 10 ;
    int a4 = (0/1)    %10 ;


	

     cout << a1 + a2 + a3 + a4 << endl;
     cout << a1 * a2 * a3 * a4 << endl;


	return 0;
}