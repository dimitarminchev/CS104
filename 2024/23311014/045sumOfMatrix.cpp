#include <iostream>
using namespace std;

int main()
{
 int matrixA[3][3];
 int matrixB[3][3];
 cout << "Enter matrix values: " << endl;
 for(int i = 0; i < 3;i++)
    for (int j = 0;j < 3;j++)
        cin >> matrixA[i][j];
 for(int i = 0;i < 3; i++)
    for(int j=0;j<3;j++)
        cin >> matrixB[i][j];

for(int i = 0; i < 3;i++)
{
    for(int j = 0;j < 3;j++)
        cout << matrixA[i][j] + matrixB[i][j] << "\t";
    cout << endl;
}

 return 0;

}