//break: �ݺϹ� �� ���� ��������
// ���� �Է� -> ���� ���
// 0 �Է¹����� ����
#include <stdio.h>

int main() {
	for (int i = 1; ; i++) {
		int k;
		scanf_s("%d", &k);

		if (k == 0) {
			break;
		}

		printf("%d��° : %d\n", i, k);
	}
}