#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	if (n > 0) {
		printf("n�� ���\n");
	}
	else if (n < 0) {
		printf("n�� ����\n");
	}
	else {
		printf("n�� 0\n");
	}
}