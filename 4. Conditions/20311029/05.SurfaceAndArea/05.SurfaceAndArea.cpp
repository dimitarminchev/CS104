#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int chosenVariation;
    float p, s;

    cout << "Select figure:\n";
    cout << "1 - Square\n";
    cout << "2 - Circle\n";
    cout << "3 - Triangle\n";
    cout << "Make your choice: ";

    cin >> chosenVariation;

    if (chosenVariation == 1)
    {
        float a;

        cout << "Square size: ";
        cin >> a;

        p = 4 * a;
        s = a * a;
    }
    else if (chosenVariation == 2)
    {
        float r;
        const float PI = 3.14159265359;

        cout << "Circle radius: ";
        cin >> r;

        p = 2 * PI * r;
        s = PI * r * r;

    }
    else if (chosenVariation == 3)
    {
        float a, b, c;

        cout << "Triangle sizes: ";
        cin >> a >> b >> c;

        p = a + b + c;
        float p_half = p / 2;
        s = sqrt(p_half * (p_half - a) * (p_half - b) * (p_half - c));
    }

    if (chosenVariation == 1 || chosenVariation == 2 || chosenVariation == 3)
    {
        cout << "Area " << p << endl;
        cout << "Surface " << s << endl;
    }

    return 0;
}