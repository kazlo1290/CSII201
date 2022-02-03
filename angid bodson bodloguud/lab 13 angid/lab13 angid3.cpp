// laboratory 13 angid bodlogo 3
#include<stdio.h>
int *find(int *begin, int *end, int x);
main()
{
	int a[5] = {3, 7, 1, 2, 4};
	int *p, x;
	printf("xaix too: ");
	scanf("%d",&x);
	p = find(a, a+5, x);
	if(p == NULL)
		printf("%d too oldsongui\n",x);
	else
		printf("%d too %d bairlald oldloo\n",x,p-a);
	return 0;	 
}
int *find(int *begin, int *end, int x)
{
	int i, s;
	s = end - begin;
	for(i=0; i<s; i++)
	{
		if(x == *(begin+i))
			return begin+i;
	}
	return NULL;
}
