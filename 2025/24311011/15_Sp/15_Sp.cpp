
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int choice;
	const double PI = 3.14159;

	cout << "Izberi figura: \n";
	cout << "1. Krug \n";
	cout << "2. Kvadrat \n";
	cout << "3. Pravougulnik \n";
	cout << "Vuvedi izbora si:";

	cin >> choice;

	switch (choice)
	{
	   case 1:
	   {
		  double radius;
		  cout << "Vuvedi radiusa na kruga:";
		  cin >> radius;
		  double S = PI * radius * radius;
		  double P = 2 * PI * radius;

		  cout << "Lice na kruga: " << S << endl;
		  cout << "Perimetur na kruga:" << P << endl;
		  break;

	   }
	   case 2:
	   {
		   double side;
		   cout << "Vuvedi strana na kvadrata:";
		   cin >> side;
		   double S = side * side;
		   double P = 4 * side;
		   cout << "Lice na kvadrata:" << S << endl;
		   cout << "Perimetur na kvadrata:" << P << endl;
		   break;
	   }
	   case 3:
	   {
		   double a, b;
		   cout << "Vuvedi dve strani na pravougulnika:";
		   cin >> a >> b;
		   double S = a * b;
		   double P = 2 * (a + b);
		   cout << "Liceto na pravougulnika:" << S << endl;
		   cout << "Perimetura na pravougulnika:" << P << endl;
		   break;
	   }
	   default:
		   cout << "Nevaliden izbor!" << endl;
	}
	return 0;
}





