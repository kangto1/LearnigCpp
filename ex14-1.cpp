#include <stdio.h>
int main() {
	int choice;

	printf("새 게임 : 1\n");
	printf("불러오기 : 2\n");
	printf("설정 : 3\n");
	printf("크레딧 : 4\n");

	scanf_s("%d", &choice);

	switch (choice) {
	case 1:
		printf("새 게임을 만듭니다.\n");
		break;
	case 2:
		printf("기존의 게임을 불러옵니다.\n");
		break;
	case 3:
		printf("설정창으로 들어갑니다.\n");
		break;
	case 4:
		printf("크레딧을 보여줍니다.\n");
		break;
	default:
		printf("잘못 입력하셨습니다.\n");
		break;
	}
}
	
	