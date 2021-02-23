/*
2. 몸무게(kg, 실수)와 키(m, 실수)를 입력받아서 체질량지수를 구하는 프로그램을 만들어보세요.
*/
#include <stdio.h>
int main() {
	float a, b;
	printf("몸무게를 입력하세요 : ");
	scanf_s("%f", &a);
	printf("키를 입력하세요 : ");
		scanf_s("%f", &b);
	printf("당신의 체질량 지수는 %f 입니다.", (a *10000)/ (b * b));
}