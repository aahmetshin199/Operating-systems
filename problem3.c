#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	char c[10];

	/*char ar[3];
	ar[0] = 'a';
	ar[1] = ' ';
	ar[2] = '5';*/

	sscanf(*argv, "%s %d", c, &n);


	int p = n - 1, i = 1;

	while (i <= n){

		for (int j = 0; j < p; j++)
			printf(" ");

		for (int j = 0 ; j < 2 * i - 1; j++)
			printf("*");

		printf("\n");
		p--;
		i++;
	}

	return 0;
}
