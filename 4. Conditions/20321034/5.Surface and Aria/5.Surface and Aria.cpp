// 5.Лице и периметър на квадрат, kръг или триъгълник
 
#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	//Необходими променливи 
	int menu;
	float p, s;

	//Меню
	cout << "select figure" << endl;
	cout << "1.Square" << endl;
	cout << "2.Circle" << endl;
	cout << "3.Triangle" << endl;
	cout << "Make your choise now";

	cin >> menu;

	// Обработка
	switch (menu)
	{  

		//Квадрат
	case 1:
	      {
		int a;
		cout << "Enter square size A=";
		cin >> a;
		p = 4 * a;
		s = a * a;
		break;

	      }

		// Кръг
	case 2:
	      {
		float r;
		cout << "Enter circle radius:=";
		cin >> r;
		p = 4 * 3.14 * r;
		s = 3.14 * r * r;
		break;
	      }
		// Триъгълник
	case 3:
	      {
		float a, b, c;
		cout << "Enter triangle sizes:";
		cin >> a >> b>>c;
		p = a + b + c;
		float p2 = p / 2;
		s = sqrt(p2 * (p2 - a) * (p2 - b) * (p2 - c));
		break;


	      }
	}


	//Отпечатване 
	cout << "Area" << p << endl;
	cout << "Surface" << s << endl;

	return 0;

}