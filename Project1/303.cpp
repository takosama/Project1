#include<stdio.h>
void p303(void)
{
	int a = 0;
	int b = 0;
	int x = 0;
	printf("aの値は%d bの値は%d xの値は%dです\n", a, b, x);

	a = 35;
	b = 99;
	printf("aとbに新しい値を代入しました\n aの値は%d bの値は%d xの値は%dです\n", a, b, x);
	
	printf("次にaとbを入れ替えたいと思います\n");
	printf("そこでa=b:b=aとしてみました");
	a = b;
	b = a;
	printf("しかしながらその結果はaの値は%d bの値は%d となりうまく行きません\n", a, b);
	printf("変数の値をもとに戻します");

	a = 35;
	b = 99;
	printf("aの値は%d bの値は%d xの値は%dです\n", a, b, x);

	printf("そこでaとbを入れ替えるためにx=a;a=b;b=xとしてみました\n");
	x = a;
	a = b;
	b = x;
	printf("そうするとaの値は%d bの値は%d となり値がきゃんとこうかんされました\n", a, b);
	printf("ちなみにこの時のxの値は%dです\n", x);
	printf("なぜこうなるのかは代入演算子を理解することが基礎になります\n");
	printf("イマイチ理解がって人は　習得できるようにがんばってください\n");
	printf("これがプログラミング学習の分かれ道なのです\n");
}