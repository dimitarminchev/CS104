//Комбинаторика: 5 : 35, 6 : 42, 6 : 49
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    // Времената за комбиниране
    vector<string> times = { "5:35", "6:42", "6:49" };

    // Генериране на пермутациите
    sort(times.begin(), times.end());
    do {
        for (const string& time : times) {
            cout << time << " ";
        }
        cout << endl;
    } while (next_permutation(times.begin(), times.end()));

    return 0;
}