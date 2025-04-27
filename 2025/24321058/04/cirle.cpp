#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[]) {
	if (argc != 2) {
		cout << "Usage: circle r : get circumference, surface of circle with radius r and volume of sphere with redius r\n";
		exit(1);
	}
	int r;
	double circumference, surface, volume;
	r = atoi(argv[1]);

	circumference = 2 * M_PI * r;
	surface = M_PI * pow(r, 2);
	volume = (4 / 3) * M_PI * pow(r, 3);

	printf("Circumference = %lf\nSurface = %lf\nVolume = %lf\n", circumference, surface, volume);

	return 0;
}
