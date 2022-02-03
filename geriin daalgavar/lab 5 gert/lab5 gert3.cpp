// laboratory 5 gert bodoh bodlogo 3
#include<stdio.h>
main()
{
	int a, b, huvaagch, min;
	scanf("%d%d",&a,&b);
	if(a > b)
		min = b;
	else
		min = a;
	for(int i=1; i<=min; i++)
	{
		if(a%i==0 && b%i==0)
		huvaagch = i;
	}
	printf("Hamgiin ih yronhii huvaagch:%d",huvaagch);
}
