#include <stdio.h>


void mondai3(void) 
{
	int x = 0;
	x = 3 - 2 - 4;
	printf("(1)%d\n",x);


	x = 3/2;
	printf("(2)%d\n", x);


	x = 5 /2*2;
	printf("(3)%d\n", x);


	x = 5/2*2/3;
	printf("(4)%d\n", x);


	x = (5/2)*(2/3);
	printf("(5)%d\n", x);


	x = 7%5;
	printf("(6)%d\n", x);


	x = 7+5%3;
	printf("(7)%d\n", x);


	x =7%5%3;
	printf("(8)%d\n", x);


	x = 26%5%5%5;
	printf("(9)%d\n", x);


	x = 128%100;
	printf("(10)%d\n", x);


	x = 6*2/3*4;
	printf("(11)%d\n", x);


	x =6/4/2;
	printf("(12)%d\n", x);

	x = 3;
	x =x/2;
	printf("(13)%d\n", x);

	x = 3;
	x =2-x/2*x;
	printf("(14)%d\n", x);

	x = 3;
	x = -(-(-x));
	printf("(15)%d\n", x);
}

