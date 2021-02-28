#include <stdio.h>
#include <string.h>

int main() {
	char str[100] = "Hello ";
	
	strcat_s(str, "World!");
	printf("%s\n", str);

	char str1[] = "sample";
	char str2[] = "simple";

	int cmp = strcmp(str1, str2);
	printf("%d\n", cmp);

}