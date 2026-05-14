#include <iostream>
using namespace std; 
int main () {
    const int n = 10;
    double trip [n] = { 1, 1, 1};
    for (int i = 3; i<n; i++)
    {
        trip[i] = trip[i - 3] + trip[i-2] + trip[i-1];
    }

    for (int i = 0; i<n; i++)
    {
        cout << trip[i] << " ";
    }
    return 0;
}