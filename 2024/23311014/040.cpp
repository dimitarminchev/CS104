#include <iostream>
using namespace std;

int main()
{
    int arr[100] = {1,-2,3,5,-7,12};
    int arrL = 6;
    int max;
    int min;


    for(int i = 0;i < arrL; i++){
        cout << arr[i] << endl;
        // check for min
        for(int k = 0;k < arrL;k++){    
            if(arr[i] > arr[k]){
                break;
            }
            min = arr[i];
        }

        for(int d = 0;d < arrL;d++){    
            if(arr[i] < arr[d]){
                break;
            }
            max = arr[i];
        }


    }


    cout << min << endl;
    cout << max << endl; 
    return 0;

}