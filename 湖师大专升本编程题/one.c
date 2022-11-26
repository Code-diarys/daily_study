#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main() {
	//	
	return 0;
}


//分解一个数的所有质因数
//	int n = 1;
//	scanf("%d", &n);
//	if (prime(n)) {
//		printf("素数：%d", n);
//	}
//	else {
//		for (int i = 2; i <=n; i++)
//			{
//				if (n % i==0) {
//					printf("质因数：%d\n", i);
//			
//				}
//		
//			}
//	}
//	
//	
//
////判断素数
//int prime(int k) {
//	for (int a = 2; a < k; a++) {
//		if (k % a==0) {
//			return 0;
//		}
//	}
//	return 1;
//	
//}


//辗转相除法求最大公约数和最小公倍数
	/*int i = 0, j = 0, r = 1, a[2] = {0};
	scanf("%d%d", &i, &j);
	if (i < j) {
		i ^= j;
		j ^= i;
		i ^= j;
	}
	a[0] = i;
	a[1] = j;
	while (i%j) {
		r = i % j;
		i = j;
		j = r;
	}
	r = a[0] * a[1] / j;
	printf("最小公约数：%d\n最大公倍数：%d", r, j);
	return 0;*/

//杨辉三角
/*int main() {
	int i = 0, n = 0,k=0;
	scanf("%d", &n);
	for ( i = 0; i <n ; i++)
	{
		for (int j = 0;  j<n-1-i; j++)
		{
			printf(" ");
		}
		for (k = 0; k <= i; k++)
		{
			printf("%2d", yanghui(i, k));
		}
		printf("\n");
	}
	return 0;
}
int yanghui(int i, int k) {
	if (i == k || k == 0) {
		return 1;
	}
	return yanghui(i - 1, k) + yanghui(i - 1, k - 1);
}	*/			

//输出m到n之间所有自然数的和
//int m = 0, n = 0, sum = 0;
//scanf("%d%d", &m, &n);
//if (m > 0 && n > 0 && m <= n) {
//	while (m <= n)
//	{
//		sum += m++;
//
//	}
//}
//printf("%d", sum);
//return 0;

//输出倒序九九乘法表
//int i = 0, j = 0;
//for (i = 1; i <= 9; i++)
//{
//	for (j = i; j > 0; j--) {
//		printf("%d*%d=%-2d\t", i, j, i * j);
//	}
//	printf("\n");
//}