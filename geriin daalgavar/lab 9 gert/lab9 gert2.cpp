// laboratory 9 gert bodlogo 2
#include<stdio.h>
int digit_sum(int x);
int main()
{
	int n, i, a;
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(i % digit_sum(i) == 0)
			printf("%d ",i);
	}
}

int digit_sum(int x)
{
	int a, s;
	s = 0;
	while(x > 0)
	{
		a = x % 10;
		s = s + a;
		x/=10;
	}
	return s;
}
