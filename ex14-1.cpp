#include <stdio.h>
int main() {
	int choice;

	printf("�� ���� : 1\n");
	printf("�ҷ����� : 2\n");
	printf("���� : 3\n");
	printf("ũ���� : 4\n");

	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("�� ������ ����ϴ�.\n");
		break;
	case 2:
		printf("������ ������ �ҷ��ɴϴ�.\n");
		break;
	case 3:
		printf("����â���� ���ϴ�.\n");
		break;
	case 4:
		printf("ũ������ �����ݴϴ�.\n");
		break;
	default:
		printf("�߸� �Է��ϼ̽��ϴ�.\n");
		break;
	}
}
	
	