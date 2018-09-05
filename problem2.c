#include <stdio.h>

void bubble_sort(int *first, int n){  //function for bubble sort, n is a size of an array

	int *ii = first, *jj = first;


	for (int i = 0; i < n; i++){
		jj = ii;

		for (int j = i; j < n; j++){
			if (*ii > *jj){
				int c = *ii;
				*ii = *jj;
				*jj = c;
			}
			jj++;
		}
		ii++;
	}
}

int main(void) {

	int a[4] = {3, 1, 2, 3}; //it is an example

	bubble_sort(a, 4);

	for (int i= 0; i < 4; i++)
		printf("%d ", a[i]);

	return 0;
}
