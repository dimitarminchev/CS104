#include <iostream>
using namespace std;
int main()
{ // 4. Telegram
    int w, w2;
    float a, b, c, p;
    cout << "A: Price of the blank" << endl;
    cout << "B: Price of the text up to 20 words" << endl;
    cout << "A: Price of each word after the first 20 words" << endl;
    cout << "Words=?, A=?, B=?, C=?" << endl;
    cin >> w >> a >> b >> c;
    w2 = w - 20;
    if (w2 > 0) p = a + b + (w2 * c);
    else p = a + b;
    cout << "Total price: " << p;
    return 0;
}