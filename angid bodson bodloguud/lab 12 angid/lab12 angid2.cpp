//laboratory 12 angid bodlogo 2
#include<stdio.h>
void swap(int *a, int *b);
int main()
{
	int a, b;
	a = 5; b = 9;
	swap(&a, &b);
	printf("a=%d b=%d",a,b);
}
void swap(int *a, int *b)
{
	int t;
	t = *a;
	*a = *b;
	*b = t;
}
