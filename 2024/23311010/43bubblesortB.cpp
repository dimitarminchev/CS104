#include<iostream>
using namespace std;
int main()
{
    int n, curNum;
    cout<<"n:";
    cin>> n;
    int a[100][100];

for (int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
        cin >> a[i][j];  
}
for (int i = 0; i < n-1; i++)
 for (int j = 0; j < n-1; j++)
    for (int k = 0; k < (n - 1 - k); k++)
        {
            int nJ = j, nK = k + 1;
            if(nJ ==(n-1))
            {
                nJ++;
                nK = 0;
            }
            if(nJ < n && a[j][k] > a[nJ][nK])
            {
                int temp = a[j][k];
                a[j][k] = a[nJ][nK];
                a[nJ][nK] = temp;
            }
        }
            curNum = a[i]
            a[i] + a[i + 1];
            a[i + 1] = curNum;
        }
    }
}
for (int i = 0; i < n; i++)
{
    cout << a[i] << " ";
}
return 0;
}