#include <iostream>
using namespace std;
int main()
{
    int space, hours, minutes, seconds;
    cout << "space=?, h=?, m=?, s=?" << endl;
    cin >> space >> hours >> minutes >> seconds;
    float freespace = space / 1024;
    int timing = (hours * 3600) + (minutes * 60) + seconds;
    if (timing >= freespace) cout << "No space";
    else cout << "Has space";
    return 0;
}
