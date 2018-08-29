#include <stdio.h>

void swap(int *c, int *d){
	int e = *c;
	printf("%d", e);
	*c = *d;
	*d = e;
}

int main(void) {

	int a, b;

	scanf("%d %d", &a, &b);

	swap(&a, &b);

	printf("%d %d", a, b);

	return 0;
}
