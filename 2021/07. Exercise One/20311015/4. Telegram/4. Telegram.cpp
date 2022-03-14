#include <iostream>
using namespace std;
int main()
{
    int wordCount;
    float a, b, c;

    cout << "Enter form price: ";
    cin >> a;
    cout << "Enter word price (single payment if under 20 words): ";
    cin >> b;
    cout << "Enter word price (for every word after 20): ";
    cin >> c;
    cout << "Enter word count: ";
    cin >> wordCount;

    float price = (wordCount > 20) ? (a + b + c * (wordCount - 20)) : (a + b);

    cout << "Total price: " << price << endl;

    return 0;
}