#include<iostream> 
#include<cmath> 
using namespace std;

int main(){
    float R, P, S;
    float PI = acos(-1.0); // 3.14

    cout << "R = ?" << endl;
    cin >> R;

    P = 2 * PI * R;
    S = PI * pow(R, 2);

    // Отпечатване на получените резултати
    cout << "P = " << P << endl;
    cout << "S = " << S << endl;

    return 0;
}