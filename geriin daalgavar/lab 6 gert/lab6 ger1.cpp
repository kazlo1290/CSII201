// laboratory 6 gert bodoh bodlogo 1
#include<stdio.h>
main()
{
	int n, m, c[100], i, k, t;
	int a[n], b[m];
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(k=0; k<m; k++)
	{
		scanf("%d",&b[k]);
	}
	
	
	for(i=0; i<n; i++)
	{
		c[i] = a[i];
	}
	int j = n;
	for(k=0; k<m; k++)
	{
		t = 0;
		for(i=0; i<n; i++)
		{
			if(b[k] == a[i])
			t = 1;
		}
		if(t != 1)
		{
			c[j] = b[k];
			j++;
		}
	}
	for(i=0; i<j; i++)
	{
		printf("%d ",c[i]);
	}
}
