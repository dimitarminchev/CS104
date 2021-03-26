#include <iostream>;
using namespace std;
int main()
{
	int rows, y, x, c;
	cout << "rows=";
	cin >> rows;
	for (y = 0; y < rows; y++)
	{
		c = 1;
		cout.width(rows - y);
		for ( x = 0; x <=y; x++)
		{
			cout << c << " "; 
			c = c * (y - x) / (x + 1);
		}
		cout << endl;
	}
	return 0;
}