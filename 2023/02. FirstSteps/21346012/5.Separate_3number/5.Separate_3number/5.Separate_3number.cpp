#include <iostream>
using namespace std;

int main(){
    int a;

    cout << "a = ?" << endl;
    cin >> a;

    int a1 = (a / 1) % 10;
    int a2 = (a / 10) % 10;
    int a3 = (a / 100) % 10;

    cout << a3 << endl << a2 << endl << a1 << endl;

    return 0;
}