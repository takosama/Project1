#include<stdio.h>
void e2_2()
{
	int a = 0;
	int b = 0;
	printf("２つの数を入力してください\n");
	printf("整数a:");
	scanf_s("%d", &a);
	printf("整数b:");
	scanf_s("%d", &b);
	printf("aはbの%d%%です\n" ,100*a / b );

}