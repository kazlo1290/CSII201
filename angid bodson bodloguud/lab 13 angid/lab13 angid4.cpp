// laboratory 13 angid bodlogo 4
#include<stdio.h>
int *find(int *begin, int *end, int x);
void replace(int *begin, int *end, int x, int y);
main()
{
	int a[5] = {3, 7, 1, 2, 3};
	int *p, x, y=9, i;
	printf("xaix too: ");
	scanf("%d",&x);
	p = find(a, a+4, x);
	a[*p] = y;
	if(p == NULL)
		printf("%d too oldsongui\n",x);
	else
		printf("%d too %d bairlald oldloo\n",x,*p);
	replace(a, a+4, x, 25);
	for(i=0; i<5; i++)
		printf("%d ",a[i]);
	return 0;	 
}
int *find(int *begin, int *end, int x)
{
	int i, s;
	s = end - begin;
	for(i=0; i<=s; i++)
	{
		if(x == *(begin+i))
			return begin+i;
	}
	return NULL;
}
void replace(int *begin, int *end, int x, int y)
{
	int i, s;
	s = end - begin;
	for(i=0; i<=s; i++)
		if(x == *(begin+i))
			*(begin+i) = y;
}
