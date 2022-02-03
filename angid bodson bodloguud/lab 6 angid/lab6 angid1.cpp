// laboratory 6 angid bodoh bodlogo 1
#include<stdio.h>
main()
{
	int n, i, a[100];
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		a[i] = i + 1;
	}
	for(i=0; i<n; i++)
		printf("%d ",a[i]);
}

