// laboratory 13 angid bodlogo 2
#include<stdio.h>
int size(int *begin, int *end);
int main()
{
	int i, n;
	scanf("%d",&n);
	int a[n];
	printf("%d\n", size(a, a+n)); // n-ii utgiig hevlene
	return 0;
}
int size(int *begin, int *end)
{
	int s;
	s = end - begin;
	return s;
}
