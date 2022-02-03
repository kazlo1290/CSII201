// laboratory 5 nemelt gert bodoh bodlogo 4
#include<stdio.h>
main()
{
	int a, k, n, i, s;
	scanf("%d",&n);
	i = 1;
	s = 0;
	k = 1;
	while(n > i)
	{
		a = s + k;
		s = k;
		k = a;
		i++;
	}
	printf("%d",k);
}
