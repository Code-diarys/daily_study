#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main() {
	//¼ÆËãnµÄ½×³Ë
	int i = 0;
	scanf("%d\n", &i);
	int x=0;
	int sum = 1;
	for (x = 1; x < i;x++) {
		
		sum *= x + 1;
		
	}
	printf("%d", sum);
	return 0;
}