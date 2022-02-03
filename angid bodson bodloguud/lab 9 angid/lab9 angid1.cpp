// laboratory 9 angid bodoh bodlogo 1
#include<stdio.h>
int gcd(int, int);

main()
{
	int a, b, HIEH;
	scanf("%d%d",&a,&b);
	printf("%d",gcd(a,b));	
}

int gcd(int x, int y)
{
	int i;
	for(i=x; ; i--)
		if(x%i==0 && y%i==0)
			return i;
}
