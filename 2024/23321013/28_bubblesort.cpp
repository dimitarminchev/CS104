
//28.
#include <iostream>
using namespace std;

int main()
 {
    const int len = 5;  
    int array[len];

    cout << "Въведете " << len << " числа: ";
    for (int i = 0; i < len; i++) 
    {
        cin >> array[i];
    }

    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (array[j] > array[j + 1]) 
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    // Извеждане на сортирания масив
    cout << "Сортиран масив: ";
    for (int i = 0; i < len; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}
