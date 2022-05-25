// Задача 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
int volume;
cout << "volume=?" << endl;
cin >> volume; // 101

int total = volume / 5; // 20
int reminder = volume % 5; //1

cout << total << "times";
switch(reminder)
{
case 1: cout << "+1 litre"; break;
case 2: cout << "+1*2 litres"; break;
case 3: cout << "+1*3 litres"; break;
case 4: cout << "+2*2 litres"; break;
}

return 0;

}


  
