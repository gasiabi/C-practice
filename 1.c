#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("Wrong number of arguments. Input only one argument.\n");
		return 1;
	}

	float radius = atoi(argv[1]);
	if (radius <= 0) {
		printf("The radius has to be a positive value.\n");
		return 1;
	}

	float area = M_PI * radius * radius;
	printf("The area of a circle with radius %.2f equals: %.2f.\n", radius, area);

	return 0;
}
