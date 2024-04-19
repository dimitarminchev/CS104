#include <iostream>

using namespace std;

int main ()
{
   int one, two, five, ten, twenty, fifty, oneLev;
   cout << "1st.: ";
   cin >> one;
   cout << "2st.: ";
   cin >> two;
   cout << "5st.: ";
   cin >> five;
   cout << "10st.: ";
   cin >> ten;
   cout << "20st.: ";
   cin >> twenty;
   cout << "50st.: ";
   cin >> fifty;
   cout << "1lev.: ";
   cin >> oneLev;

   int count =  one + two + five + ten + twenty + fifty + oneLev;
   float sum= (one * 0.01) + (two * 0.02) + (five * 0.05) + (ten * 0.10) + (twenty * 0.20) + (fifty * 0.50) + (oneLev * 1.00);

   cout << " Broi: " << count << endl << "Suma: " << sum << endl;

   return 0;

}



