// lab4-iin gert bodoh bodlogo 2
#include<stdio.h>
main()
{
	int i, a, b, max, Huvaagch;
	scanf("%d%d",&a,&b);
	if(a > b)
		max = a;
	else 
		max = b;
	for(i=1; i<=max; i++)
	{
		if(a%i==0 && b%i==0)
		Huvaagch = i;
	}
	printf("a, b toonuudiin hamgiin huvaagch:%d",Huvaagch);
}
