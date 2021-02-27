//break: 반북문 한 개를 빠져나옴
// 숫자 입력 -> 숫자 출력
// 0 입력받으면 종료
#include <stdio.h>

int main() {
	for (int i = 1; ; i++) {
		int k;
		scanf_s("%d", &k);

		if (k == 0) {
			break;
		}

		printf("%d번째 : %d\n", i, k);
	}
}