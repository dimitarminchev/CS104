#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[100];
    int evenArr[100];
    int oddArr[100];
    int j = 0, k = 0, n, temp;


    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenArr[j] = arr[i];
            j++;
        }
        else
        {
            oddArr[k] = arr[i];
            k++;
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {         
            if (evenArr[j] < evenArr[j + 1])
            {
                int temp = evenArr[j];
                evenArr[j] = evenArr[j + 1];
                evenArr[j + 1] = temp;
            }
        }
    }
  
      for (int i = 0; i <= k - 1; i++)
    {
        cout << oddArr[i] << " ";
    }
      for (int i = 0; i <= k - 1; i++)
      {
          cout << evenArr[i] << " ";
      }
    return 0;
}