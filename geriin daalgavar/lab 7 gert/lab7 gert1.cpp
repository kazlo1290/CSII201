//laboratory 7 gert bodlogo 1
#include<stdio.h>
main()
{
	int i, k, n, m, a[100][100];
	scanf("%d%d",&n,&m);
	for(i=0; i<n; i++)
	{
		for(k=0; k<m; k++)
			a[i][k] = i+1;
	}
	
	for(i=0; i<n; i++)
	{
		for(k=0; k<m; k++)
			printf("%d ",a[i][k]);
		printf("\n");
	}
}
