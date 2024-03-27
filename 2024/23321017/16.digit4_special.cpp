#include<iostream>
using namespace std;

int main() {

    for(int i = 1000; i <= 9999; i++) {
        int firstTwoDigits[2], lastTwoDigits[2];
        firstTwoDigits[0] = i / 1000;
        firstTwoDigits[1] = (i / 100) % 10;

        lastTwoDigits[0] = (i / 10) % 10;
        lastTwoDigits[1] = i % 10;

        if (firstTwoDigits[0] + firstTwoDigits[1] == lastTwoDigits[0] + lastTwoDigits[1]) {
            cout << i << " ";
        }
    }

    return 0;
}