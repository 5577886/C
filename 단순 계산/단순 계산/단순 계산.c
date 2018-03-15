#include<stdio.h>

int main(void)
{
	int a, b, c, d;
	int v = 12; int w = 3;
	int x = 2; int y = 6;
	int z = 7;
	printf("12/3*2+6-7=?의 계산프로그램입니다.\n");
	a = v / w;
	b = a * x;
	c = b + y;
	d = c - z;
	printf("최종답은%d입니다.\n", d);
}