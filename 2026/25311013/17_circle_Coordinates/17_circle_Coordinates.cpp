#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float Ax, Ay, Ar, Bx, By, Br;

	cout << "Enter circle A (x,y,r): " << endl;
	cin >> Ax >> Ay >> Ar;
	cout << "Enter circle B (x,y,r): " << endl;
	cin >> Bx >> By >> Br;

	float d = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));

	if (d > Ar + Br) cout << "Circles has NO comon point of intersept." << endl;
	if (d == Ar + Br) cout << "Circles has ONE common point of intersept." << endl;
	if (d < Ar + Br) cout << "Circles has TWO common points of intersept." << endl;


    if (d < Ar + Br && d > fabs(Ar - Br)) { // две пресечни точки
        float dx = Bx - Ax, dy = By - Ay;

        float ux = dx / d;
        float uy = dy / d;

        float a = (Ar * Ar - Br * Br + d * d) / (2 * d);
        float cx0 = Ax + a * ux;
        float cy0 = Ay + a * uy;

        float h = sqrt(Ar * Ar - a * a);

        float vx = -uy;  // перпендикулярен вектор
        float vy = ux;

        float Cx = cx0 + h * vx;
        float Cy = cy0 + h * vy;
        float Dx = cx0 - h * vx;
        float Dy = cy0 - h * vy;

        cout << "Common points: (" << Cx << ", " << Cy << ") and (" << Dx << ", " << Dy << ")" << endl;
    }

	return 0;
}