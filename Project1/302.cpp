#include<stdio.h>
void p302(void)
{
	int a = 16;
	int b = 88;
	printf("aの値は%dでbの値は%dです\n", a, b);
	printf("いまa=bのように代入演算子を用いて代入します");
	a = b;
	printf("そうすると\n 変数a=%d b=%dとなりました。\n", a, b);
	printf("つまり　変数aにbの中の値が代入されたのです");
	printf("ちなみにこの時bの値は保持されます\n");
}