#define _CRT_SECURE_NO_WARNINGS 1
/*
#include<stdio.h>
#include<stdlib.h>//system
#include<string.h>//strcmp

*/


/*
int main() {
	int day = 1;
	int i = 3;
	switch (4)
	{
	case 1:
		day++;
		printf("%d", 1);
	case 2:
		day++;
		printf("%d", 2);
	case 3:
		day++;
		printf("%d", 3);
		break;
	case 4:printf("%d", day);
	}
	printf("%d", day);
	return 0;
}

*/
/*
	int i = 1;
	int count = 0;
	while (i < 101)
	{
		if (i % 2 == 1) {
			count++;
		};
		i++;
	};
	printf("%d", count);
	*/
/*
struct Book
{
	char name[20];
	short price;
};

int main() {
	/*�ṹ��*/
/*
struct Book b1 = { "C���Գ������",55 };
struct Book* pb = &b1;
strcpy(pb->name, "C++");
printf("%s\n%d", pb->name, pb->price);
printf("������%s\n�۸�%d", b1.name, b1.price);
return 0;


}
*/
/*
	extern int g_val;
	int a = 0;
	int b = a++;
	printf("%d\n", g_val);
	printf("%d\n%d", b,a);
	return 0;
	*/
	/*
		int i = 1;
		int* p = &i;
		printf("%p\n", &i);
		printf("%p\n", p);
		*p = 20;
		char o = 'a';
		printf("%d", sizeof(o));*/

//�ػ�С����
/*
int main() {
	char input[20] = { 0 };
	system("shutdown -s -t 120");
again:
	printf("��ע�⣬��ĵ������������ڹػ�");
	scanf("%s", input);
	if (strcmp(input, "qq") == 0) {
		system("shutdown -a");
	}
	else {
		goto again;//����again����ǵĵط�
	}
		return 0;
}
*/
//��������Ѱ��ֻ����һ�ε���
/*
int main() {
	int arr[] = { 1,2,3,4,5,6,1,2,3,4,5,6,7 ,7,8};
	int i = 0;
	int sum = 0;
	int sz = sizeof(arr)/sizeof(arr[0]);
	for (i; i < sz; i++) {
		sum ^= arr[i];
	}

	printf("%d",sum);
}

*/