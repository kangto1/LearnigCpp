// 1. 시험점수 입력
// 90~100 A
// 80~89 B
// 70~79 C
// 60~69 D
// 50~59 E
//~49 F

#include <stdio.h>
int main() {

	int test;
	scanf_s("%d", &test);
	
	if (90 <= test <= 100) {
		printf("A");
	}
	else if (80 <= test < 90) {
		printf("B");
	}
	else if (70 <= test < 80) {
		printf("C");
	}
	else if (60 <= test < 70) {
		printf("D");
	}
	else {
		printf("E");
	}

}