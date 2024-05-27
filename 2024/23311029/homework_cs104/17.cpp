#include <iostream>
#include <string>
using namespace std;

int main() {
    int number;
    cin >> number;
    string word;
    switch (number) {
    case 0:
        word = "nula";
        break;
    case 1:
        word = "edno";
        break;
    case 2:
        word = "dve";
        break;
    case 3:
        word = "tri";
        break;
    case 4:
        word = "cheteri";
        break;
    case 5:
        word = "pet";
        break;
    case 6:
        word = "shest";
        break;
    case 7:
        word = "sedem";
        break;
    case 8:
        word = "osem";
        break;
    case 9:
        word = "devet";
        break;
    default:
        return 0;
   
    cout << word << endl;
    return 0;
}
