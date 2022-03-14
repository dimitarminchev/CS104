#include <iostream>
using namespace std;
int main()
{ // 6. Audio Recording
	int stor, h, m, s;
	cout << "storage=?, h=?, m=?, s=?" << endl;
	cin >> stor >> h >> m >> s;
	float freesp = stor / 1024;
	float t = h * 3600 + m * 60 + s;
	if (t >= freesp) cout << "No space";
	else cout << "Available space";
	return 0;
}