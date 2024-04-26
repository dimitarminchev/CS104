#include <iostream>
#include <cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n, curNum;
    print("n: ");
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < (n - 1 - i); i++) {
            if (arr[i] > arr[i + 1]) {
                curNum = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = curNum;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        print(arr[i] << " ");
    }

    return 0;
}