#include <iostream>
using namespace std;

int main()
{
    int n;
    int base, height;
    int length = 0;
    int width = 0;

    cout << "Vuvedi broi triugulnici: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> base >> height;

        length += base;

        if (height > width)
        {
            width = height;
        }
    }

    cout << "Duljina = " << length << endl;
    cout << "Shirina = " << width << endl;

    cin.get();
    cin.get();
    return 0;
}
