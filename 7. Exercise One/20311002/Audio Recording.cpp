#include <iostream>
using namespace std;
int main()
{
    // Необходими променливи
    int space, hours, minutes, seconds;

    // Въвеждаме входни данни от клавиатурата
    cout << "space=?, h=?, m=?, s=?" << endl;
    cin >> space >> hours >> minutes >> seconds;

    // Математически изчисления
    float freespace = space / 1024;
    int timing = (hours * 3600) + (minutes * 60) + seconds;

    // ИЗвеждаме съобщение
    if (timing >= freespace) cout << "No space";
    else cout << "Has space";

    return 0;
}
