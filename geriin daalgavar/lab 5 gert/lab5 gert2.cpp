// laboratory 5 gert bodoh bodlogo 2
#include<stdio.h>
main()
{
	int b, i, n, a, s;
	scanf("%d",&n);
	while(i < n)
	{
	s = 0;
	b = i;
		while(b > 0)
		{
			a = b % 10;
			s = s + a;
			b = b / 10;
		}
	if(i % s == 0)
		printf("%d ",i);
	i++;
	}
}
