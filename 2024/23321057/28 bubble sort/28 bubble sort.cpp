// 28 bubble sort
#include<iostream>
using namespace std;
int main()
{
    const int N = 100;
    int A[N];
    int n;
    cout << "n=";
    cin >> n;
    for (int k = 0; k < n; k++) cin >> A[k];
    //bubble sort
    for (int x = 0; x < n; x++)
        for (int y = 0; y < n; y++)
            if (A[x] > A[y])
            {
                int temp = A[x];
                A[x] = A[y];
                A[y] = temp;
            }
    //print
    for (int k = 0; k < n; k++) cout << A[k] << " ";
    return 0;
}
