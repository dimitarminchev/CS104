#include <iostream>
using namespace std;
double dick (int n) {
    if (n<= 1) return 1;
    else return n * dick(n - 1);
}
 
int main () {
    double Cum_5_35 = dick(35) / (dick (5) * dick(35-5));
    double Cum_6_42 = dick(42) / (dick (6) * dick(42-6));
    double Cum_6_49 = dick(49) / (dick (6) * dick(49-6));
    cout << "Cum purity from 5% to 35% is: " << Cum_5_35 << endl;
    cout << "Cum purity from 6% to 42% is: " << Cum_6_42 << endl;
    cout << "Cum purity from 6% to 49% is: " << Cum_6_49 << endl;
    return 0;
}