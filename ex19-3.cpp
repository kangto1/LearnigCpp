// 일의 자릿수가 3, 6, 9, 인 경우 *
// 1 2 * 4 5 * 7 8 * 10 11 12 * 14 . . .

#include <stdio.h>
int main() {

	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if ((i % 10) % 3 == 0 && i % 10 != 0) {
			printf("* ");
			continue;
		}
		printf("%d ", i);
	}

}