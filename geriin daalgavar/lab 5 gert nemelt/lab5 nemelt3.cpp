// laboratory 5 nemelt gert bodoh bodlogo 3
#include<stdio.h>
main()
{
	int i, k;
	for(i=1; i<=10; i++)
	{
		for(k=1; k<=10; k++)
		{
			printf("%d*%d=%.2d ",i,k,i*k);
		}
		printf("\n");
	}
}
