// laboratory 6 angid bodoh bodlogo 5
#include<stdio.h>
main()
{
	int n, a[100], i, b[100], k, m, t;
	scanf("%d",&n);
	for(i=0; i<n; i++)
		scanf("%d",&a[i]);
	scanf("%d",&m);
	for(k=0; k<m; k++)
		scanf("%d",&b[k]);
		
	for(i=0, t=0; i<n; i++)
	{
		for(k=0; k<m; k++)
		{
			if(a[i] == b[k])
			{
				printf("%d ",a[i]);
			}
		}
	}
}
