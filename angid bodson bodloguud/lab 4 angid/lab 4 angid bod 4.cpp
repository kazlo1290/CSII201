// lab4-iin angid bodoh bodlogo 4
#include<stdio.h>
main()
{
	int n, i, s;
	scanf("%d",&n);
	s = 0;
	for(i=2; i<=n; i+=2)
	{
		s = s + i;
	}
	printf("N hurtelh tegsh toonuudiin niilber:%d",s);
}
