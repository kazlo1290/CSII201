// laboratory 5 gert bodoh bodlogo 1
#include<stdio.h>
main()
{
	int n;
	scanf("%d",&n);
	printf("n toonii buh huvaagchuud: ");
	for(int i=1; i<=n; i++)
	{
		if(n % i == 0)
		printf("%d ",i);
	}
}
