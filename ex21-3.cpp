// 짝수의 개수
#include <stdio.h>
int main() {
	int n;
	int arr[1000];

	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 2 == 0) {
			cnt++;
		}
	}
	printf("%d\n", cnt);
};