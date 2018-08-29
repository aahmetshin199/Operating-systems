#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {

	int a = INT_MAX;
	float b = FLT_MAX;
	double c = DBL_MAX;

	printf("MAX VALUE OF INT IS: %d \nTHE SIZE IS: %lu \n", a, sizeof(a));
	printf("MAX VALUE OF FLOAT IS: %f \nTHE SIZE IS: %lu \n", b, sizeof(b));
	printf("MAX VALUE OF DOUBLE IS: %f \nTHE SIZE IS: %lu \n", c, sizeof(c));

	return 0;
}
