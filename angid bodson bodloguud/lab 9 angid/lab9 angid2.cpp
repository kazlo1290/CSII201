// laboratory 9 angid bodoh bodlogo 2
#include<stdio.h>
int min(int, int, int, int, int);
main()
{
	int baga, a, b, c, d, e;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	baga = min(a,b,c,d,e);
	printf("%d",baga);
}

int min(int y,int b,int c,int d,int e)
{
	int i, min, a[6];
	a[0] = y;
	a[1] = b;
	a[2] = c;
	a[3] = d;
	a[4] = e;
	for(i=1, min=a[0]; i<4; i++)
	{
		if(min > a[i+1])
			min = a[i];
	}
	return min;
}
