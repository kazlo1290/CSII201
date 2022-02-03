// lab 2 angid bodoh bodloguud : 5
#include<stdio.h>
int main()
{
	int a, b, c, max, min, middle, x, y, s;
	scanf("%d %d %d",&a,&b,&c);
	s = a + b + c;
//	a=5; b=3; c=9;
	max = (((a < b) * b) > c) * b + (((a > b) * a) > c) * a + (((a < c) * c) > b) * c;
	a = (a < max) * a;
	b = (b < max) * b;
	c = (c < max) * c;
	min = (((a < b) * a) > c) * a + (((a > b) * b) > c) * b + (((a > c) * c) < b) * c;
	middle = s - min - max;
	printf("%d %d %d",max, middle, min);
}

