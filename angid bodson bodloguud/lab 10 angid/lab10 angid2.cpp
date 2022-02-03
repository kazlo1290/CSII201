// laboratory 10 angid bodlogo 2
#include<stdio.h>
int count(int x);

int main()
{
	int n, a;
	scanf("%d",&n);
	a = count(n);
	printf("%d",a);
}
int count(int x)
{
	int i, s;
	s = 0;
	i = 1;
	while(i <= x)
	{
		if(x % i == 0)
			s++;
		i++;
	}
	return s;
}
