// click.cpp = Игра "Цък"!

#include <iostream>
using namespace std;

// 0 - exit; Enter = click;

int main() {
    cout << "Welcome to 'Click' game!\n";
    cout << "Press ENTER to 'click'. Type '0' and press ENTER to exit.\n";

    int count = 0;
    string input;

    while(true) {
        getline(cin, input);
        if(input == "0") {
            break;
        }
        count++;
        cout << "Click count = " << count << endl;
    }

    cout << "Game over. Total clicks = " << count << endl;
    return 0;
}
