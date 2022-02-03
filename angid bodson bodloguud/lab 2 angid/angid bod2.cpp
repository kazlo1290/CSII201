// lab 2 angid bodoh bodloguud : 2
#include<stdio.h>
int main()
{
	int a, b, c;
	scanf("%d %d",&a,&b);
	// 1) a=5; b=9;
	// 2) a=8; b=3;
	c = (a > b) * a + (a <= b) * b;
	c = (a + b) - c;
	printf("%d ",c);
	c = (a + b) - c;
	printf("%d",c);
}
