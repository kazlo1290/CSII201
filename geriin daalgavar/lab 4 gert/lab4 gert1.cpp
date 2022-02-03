// lab4-iin gert bodoh bodlogo 1
#include<stdio.h>
main()
{
	int n, i;
	scanf("%d",&n);
	printf("N toonii huvaagchid: ");
	for(i=1; i<=n; i++)
	{
		if(n % i == 0)
		printf("%d ",i);
	}
}
