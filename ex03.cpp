/*
3. ���ĺ��� �Է¹޾Ƽ� �� ���� ���ĺ��� ����ϴ� ���α׷��� ����� ������(z����)
*/
#include <stdio.h>
int main() {
	char alphabet;
	printf("���ĺ��� �Է��Ͻÿ� : ");
	scanf_s("%c", &alphabet);
	
	char nextalpha = alphabet + 1;

	printf("���� ���ĺ��� %c �Դϴ�", nextalpha);

}