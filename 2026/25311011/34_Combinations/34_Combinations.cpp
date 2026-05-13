#include <iostream>
using namespace std;

int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int main()
{
	double C_5_35 = fact(35) / (fact(5) * fact(35 - 5));
	double C_6_42 = fact(42) / (fact(6) * fact(42 - 6));
	double C_6_49 = fact(49) / (fact(6) * fact(49 - 6));

	cout << "5 from 35" << " = " << C_5_35 << endl;
	cout << "6 from 42" << " = " << C_6_42 << endl;
	cout << "6 from 49" << " = " << C_6_49 << endl;

    return 0;
}