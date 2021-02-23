//비교연산자
#include <stdio.h>

int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);
	
	// bool : 진리값을 저장하는 변수
	bool p = a > b;
	bool q = a < b;
	bool r = a == b; // == : 같다
	
	printf("%d\n", p);
	printf("%d\n", q);
	printf("%d\n", r);
}