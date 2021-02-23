/*
3. 알파벳을 입력받아서 그 다음 알파벳을 출력하는 프로그램을 만들어 보세요(z제외)
*/
#include <stdio.h>
int main() {
	char alphabet;
	printf("알파벳을 입력하시오 : ");
	scanf_s("%c", &alphabet);
	
	char nextalpha = alphabet + 1;

	printf("다음 알파벳은 %c 입니다", nextalpha);

}