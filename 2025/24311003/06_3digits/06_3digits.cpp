// Otcepvane na cifrite na triciferno chislo
using namespace std;
int main()
{
	int n;

	cout << "Enter 3 digit number:" << endl;
	cin >> n;

	int a = (n / 100) % 10;
	int b = (n / 10) % 10;
	int c = (n / 1) % 10;

	cout << c << b << a << endl;

	return 0;
}
