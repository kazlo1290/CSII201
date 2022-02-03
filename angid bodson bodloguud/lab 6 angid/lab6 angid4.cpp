// laboratory 6 angid bodoh bodlogo 4
#include<stdio.h>
main()
{
	int n, i, a[100], x, s=0, w=0;
	scanf("%d",&n);
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("x=");
	scanf("%d",&x);
	
	for(i=0; i<n; i++)
	{
		if(a[i] == x)
		{
			s++;
			w = i;		
		}
	}
	
	if(s>0)
		printf("Bairiin too=%d",w+1);
	else
		printf("-1");
}
