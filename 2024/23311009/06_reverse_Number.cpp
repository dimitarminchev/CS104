#include <iostream>


using namespace std;
int main()
{
	int num, firstPos, secondPos, thirdPos;

	cout << "number: ";
	cin >> num;
    firstPos = (num/ 100 ) % 10;
    secondPos = (num/ 10 ) % 10;
    thirdPos = num % 10;
    

     cout << thirdPos << secondPos << firstPos << endl;
     



	return 0;
}
