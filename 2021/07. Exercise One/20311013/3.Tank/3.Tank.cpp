#include <iostream>
using namespace std;
int main()
{ // 3. Tank
    int v, t, rem;
    cout << "V=?" << endl;
    cin >> v;
    t = v / 5;
    rem = v % 5;
    cout << t << " times of both buckets ";

    switch (rem)
    {
    case 1: cout << "and 1 litre."; break;
    case 2: cout << "and one time of the 2 litre bucket."; break;
    case 3: cout << "and one time of the 3 litre bucket."; break;
    case 4: cout << "and two times of the 2 litre bucket."; break;
    }
    return 0;
}