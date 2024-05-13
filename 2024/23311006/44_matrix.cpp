#include <iostream>
using namespace std;
int main()
{
    int n;

    int matrix[3][3];
    cout << "Enter matrix values: " << endl;
    
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) 
            cin >> matrix[i][j];
            
    cout << "n=" << endl;
    cin >> n;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
      {
          matrix[i][j] *= n;
          cout << matrix[i][j] << "\t";
      }
        cout << endl;
    }
    
    return 0;
}
