#include<iostream>
using namespace std;
int main()
{
 int edna_st, dve_st, pet_st, deset_st, dvadeset_st, petdeset_st;
 
 cout << "edna_st=";
 cin >> edna_st;
 cout << "dve_st=";
 cin >> dve_st;
 cout << "pet_st=";
 cin >> pet_st;
 cout << "deset_st=";
 cin >> deset_st;
 cout << "dvadeset_st=";
 cin >> dvadeset_st;
 cout << "petdeset_st=";
 cin >> petdeset_st;

 float sum_leva = ((1 * edna_st) + (2 * dve_st) + (5 * pet_st) + (10 * deset_st) + (20 * dvadeset_st) + (50 * petdeset_st));
 sum_leva = sum_leva / 100;
 int sum_moneti = edna_st + dve_st + pet_st + deset_st + dvadeset_st + petdeset_st;

 cout << "broi leva = " << sum_leva << endl;
 cout << "broi moneti = " << sum_moneti;

 return 0;
}