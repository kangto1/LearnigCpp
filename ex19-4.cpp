/*
	n = 4
	1
	1 3
	1 3 5
	1 3 5 7

*/
#include <stdio.h>
int main() {
	
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			int k = 2*j - 1;
			printf("%d ", k);
		}
		printf("\n");
	}

}