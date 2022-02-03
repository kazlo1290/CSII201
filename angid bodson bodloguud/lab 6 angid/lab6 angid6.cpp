// laboratory 6 angid bodoh bodlogo 5
#include<stdio.h>
main()
{
	int x, n, m, a[100][100], i, k;
	scanf("%d",&n);
	scanf("%d",&m);
	for(k=0; k<n; k++)
	{
		for(i=0; i<m; i++)
		{
			scanf("%d",&a[k][i]);
		}
	}
	scanf("%d",&x);
	for(k=0; k<n; k++)
	{
		for(i=0; i<m; i++)
		{
			if(a[k][i] == x)
			printf("mor:%d bagana:%d\n",k+1,i+1);
		}
	}
}
