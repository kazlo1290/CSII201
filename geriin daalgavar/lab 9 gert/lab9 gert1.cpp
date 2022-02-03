// laboratory 9 gert bodlogo 1
#include<stdio.h>
int palindrom(int x);

main()
{
	int n;
	scanf("%d",&n);
	if(palindrom(n) == 1)
		printf("Palindrom too");
	else
		printf("Palindrom too bish");
}

int palindrom(int x)
{
	int b, k, a, s;
	b = x;
	while(x > 0)
	{
		a = x % 10;
		s = (s + a) * 10;
		//printf("%d\n",s);
		x/=10;
	}
	return s/10==b;
}
