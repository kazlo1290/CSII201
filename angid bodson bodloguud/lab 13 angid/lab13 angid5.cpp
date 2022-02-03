// laboratory 13 angid bodlogo 5
#include<stdio.h>
void reverse(int *begin, int *end);
int main()
{
	int a[5] = {3, 7, 1, 2, 4};
	reverse(a, a+2);
	int i;
	for(i=0; i<5; i++)
		printf("%d ",a[i]);  //1 7 3 2 4
	return 0;
}
void reverse(int *begin, int *end)
{
	int i, n, k;
	n = end - begin + 1;
	while(begin<end)
	{
		k = *begin;
		*begin = *end;
		*end = k;
		begin++; end--;
	}
}
