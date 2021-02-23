//논리연산자(그리고, 또는 . . .)
// && || !
#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);

	int p = a >= 1 && a <= 10;
	int q = a == 3 || a == 7;
	int r = !q;

	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}
