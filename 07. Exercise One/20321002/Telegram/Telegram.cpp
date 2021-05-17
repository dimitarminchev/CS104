#include <iostream>
using namespace std;
int main()
{
    float words, A, B, C;
    cout << "words=?, A=?, B=?, C=?" << endl;
    cin >> words >> A >> B >> C;
    float total = (words - 20) > 0 ? (A + B + ((words - 20) * C)) : (A + B);
    cout << "total=" << total << endl;
    return 0;
}
