#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>

//void sort(int n[],int sz) {
//	int i = 0, j = 0;
//	for ( i = 0; i < sz-1; i++)
//	{
//		int flag = 1;
//		for ( j = 0; j < sz-i -1; j++)
//		{
//			if (n[j] > n[j + 1]) {
//				n[j] ^= n[j + 1];
//				n[j + 1] ^= n[j];
//				n[j] ^= n[j + 1];
//				flag = 0;
//			}
//		}
//		if (flag == 1)break;
//	}
//	
//}
//void reverse(char* arr) {
//	
//		char left = *arr;
//		int right = strlen(arr) - 1;
//		*arr = *(arr + right);
//		*(arr + right) = '\0';
//		if (strlen(arr + 1) > 1)
//		{
//			reverse(arr + 1);
//		}
//		*(arr + right) = left;
//	
//
//}

//char a[] = "qwer";
//reverse(a);
//printf("%s", a);


int main() {
	char arr[] = "qwer";
	char* p = &arr;
	printf("%s", p+1);
	return 0;
}

//判断两个数不同的个数
//int i = 0, j = 0;
//scanf("%d%d", &i, &j);
//i ^= j;
//j = 0;
//while (i) {
//	i = i & (i - 1);
//	j++;
//}
//printf("%d", j);

/*倒序99乘法表
	int i=0,j=0;
	for(i=1;i<=9;i++){
		for(j=i;j>=1;j--){
			printf("%d*%d=%-2d\t", i, j, i * j);
		}
		printf("\n");
	}*/
//int print(int n) {
//	if (n<=1) {
//		return 1;
//	}
//	else {
//		return n*print(n - 1);
//	}
//	return 0;
//		
//
//}
//int print(int n) {
//	if (n <= 2) {
//		return 1;
//	}
//	else {
//		return print(n-2) + print(n - 1);
//	}
//	return 0;
//
//
//}
//int count = 0;
//print(int n) {
//	
//	if (n <= 2) {
//		return n;
//	}
//	
//	
//	if (n == 0) {
//		count++;
//	}
//	else if (n < 0);
//	else {
//		print(n - 1);
//		print(n - 2);
//	}
//	
//	
//	
//}
//s(int n) {
//	if (n = 0) {
//		return 1;
//	}
//	return s(n - 1) + s(n - 2);
//}
//int main() {
//	int i = 0;
//	scanf("%d", &i);
//	int a = s(i);
//	printf("%d", a);
//	return 0;
//}


/*
int main() {
	int i = 0;
	for ( i = 100; i < 200; i++)
	{
		if (ais_prime(i) == 1)
		{
			printf("%d\t", i); }
	}
	return 0;
}

int ais_prime(int p) {
	int q = 0;
	int x = sqrt(p);

	for (q = 2; q < x; q++) {
		if (p % q == 0) {
			return 0;
		}
	}
	return 1;
}
*/