// �ڿ��� �Է¹޾Ƽ� ��� ���
#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			printf("%d,", i);
		}
	}
}