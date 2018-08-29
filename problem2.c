#include <stdio.h>

int main(void) {
	char str[256];

	printf("Print your string:\n");

	scanf("%s", str);

	int n = strlen(str);

	for (int i = n - 1; i >= 0; i--)
		printf("%c", str[i]);
}
