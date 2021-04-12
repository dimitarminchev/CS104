// 6.Имат ли две окръжности общи точки?

#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	//Необходими променливи 
	float Ax, Ay, Ar, Bx, By, Br;

	//Въвеждаме данни за окръжностите 

	cout << "Enter first circle[x y r ]:" << endl;
	cin >> Ax >> Ay >> Ar;
	cout << "Enter second circle[x y r ]:" << endl;
	cin >> Bx >> By >> Br;

	//Разстояние 
	float d = sqrt(pow((Ax - Bx), 2) + pow((Ay - By), 2));

	//Проверка
	if (Ar + Br < d)cout << "No interception points" << endl;
	if (Ar + Br == d) cout << "One interception point" << endl;
	if (Ar + Br > d)cout << "Two interception point" << endl;


	return 0;

}