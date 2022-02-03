// lab4-iin angid bodoh bodlogo 6
#include<stdio.h>
main()
{
	int a, n, i, s;
	scanf("%d",&n);
	s = 0;
	while(n > 0)
	{
		a = n % 10;
		s = s + a;
		n = n / 10;
	}
	printf("N toonii tsipruudiin niilber:%d",s);
}
