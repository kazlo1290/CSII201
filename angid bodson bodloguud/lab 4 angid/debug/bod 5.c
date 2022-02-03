// lab4-iin angid bodoh bodlogo 5
#include<stdio.h>
main()
{
	int a, n, i, max, min;
	scanf("%d",&n);
	max = 0;
	for(i=1; i<=n; i++)
	{
		scanf("%d",&a);
		if(max < a)
		{
			max = a;
		}
		printf("max=%d ",max);
	}
	
	printf("\nHamgiin ih too:%d\n",max);
//	printf("Hamgiin baga too:%d\n",min);
}
