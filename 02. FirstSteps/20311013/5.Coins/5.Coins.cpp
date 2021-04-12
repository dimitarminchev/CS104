#include <iostream>
using namespace std;

int main()
{
    int s1, s2, s5, s10, s20, s50, l1, l2, all;
    cout << "0.01=?, 0.02=?, 0.05=?, 0.10=?, 0.20=?, 0.50=?, 1.00=?, 2.00=?" << endl;
    cin >> s1 >> s2 >> s5 >> s10>> s20>> s50>> l1>> l2;
    all= s1+s2+ s5+ s10+ s20+ s50+ l1+ l2;
    float sum= s1*0.01+ s2*0.02+ s5*0.05+ s10*0.10+ s20*0.20+ s50*0.50+ l1+ l2*2;
    cout << "Count:" << all << " Sum:" << sum << endl;
    return 0;
}