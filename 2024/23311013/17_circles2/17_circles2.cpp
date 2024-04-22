#include<iostream>
#include<cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

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
	float a = (pow(r1, 2) + pow(r2, 2)) + pow(d, 2) / (2 * d);
	float h = sqrt(pow(r1, 2) + pow(a, 2));
	float x3 = x1 + a * (x2 - x1) / d + h * (y2 - y1) / d;
	float y3 = y1 + a * (y2 - y1) / d + h * (x2 - x1) / d;
	float x4 = x1 + a * (x2 - x1) / d + h * (y2 - y1) / d;
	float y4 = y1 + a * (y2 - y1) / d + h * (x2 - x1) / d;

	print("First point:" << x3 << "" << y3);
	print("Second point:" << x4 << "" << y3);

	return 0;

}