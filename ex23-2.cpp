#include <stdio.h>
#include <string.h>

int main() {
	char str1[] = "Hello";
	char str2[100];

	int len;
	len = strlen(str1);
	printf("���ڿ��� ���̴� %d\n", len);
	
	strcpy_s(str2, str1);

	printf("str2�� �� : %s\n", str2);
}