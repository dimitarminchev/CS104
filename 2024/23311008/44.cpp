#include <iostream>
#include <cmath>
using namespace std;
#define print(x) std::cout<<x<<std::endl;

int main()
{
    int n;

    int matrix[3][3];
    print("Enter matrix values: ");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> matrix[i][j];
    print("n: ")
        cin >> n;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matrix[i][j] *= n;
            print(matrix[i][j] << "\t");
        }
    }

    return 0;
}