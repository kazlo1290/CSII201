// laboratory 5 nemelt gert bodoh bodlogo 2
#include<stdio.h>
main()
{
	int n, t=1, i;
	scanf("%d",&n);
	if(0<n && n<10)
	{
		for(i=1; i<n; i++)
			t = t * 10;
		for(i=t; i<=t*10-1; i++)
			printf("%d ",i);
	}
}
