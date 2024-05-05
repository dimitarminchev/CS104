#include <iostream>
using namespace std;
#define print(x) std::cout<<x<<std::endl;
#include <cmath>

int main()
{
	float x1, y1, x2, y2, r1, r2;
	//input
	print("x1,y1, r1 ");
	cin >> x1 >> y1 >> r1;
	print("x2,y2, r2 ");
	cin >> x2 >> y2 >> r2;
	// maths
	float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	// output 
	if (d > r1 + r2) print("No common Points");
	if (d = r1 + r2) print("1 common Points");
	if (d < r1 + r2) print("2 common Points");
}

