// laboratory 10 angid bodlogo 3
#include<stdio.h>
int count(int n, int A[]);

int main()
{
	int n, a[100], i, b;
	scanf("%d",&n);
	b = count(n, a);
	printf("%d\n",b);
	for(i=0; i<b; i++)
	{
		printf("%d ",a[i]);
	}
}
int count(int n, int A[])
{
	int i, s, k;
	s = 0;
	i = 1;
	k = 0;
	while(i <= n)
	{
		if(n % i == 0)
		{
			A[k] = i;
			s++;
			k++;
		}
		i++;
	}
	return s;
}
