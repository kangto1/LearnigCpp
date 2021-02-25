#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	//2^0 = 1
	//2^1 = 2
	//2^2 = 4
	// . . .
	
	for (int i = 0, t = 1; i <= n; i++, t *= 2) {
		printf("2^%d´Â %d\n", i, t);
	}
}