// lab3-iin angid bodoh bodlogo 3
#include<stdio.h>
main()
{
	int a, b, c, d, e, k;
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	if(a<b)
	{
		k = a;
		a = b;
		b = k;
	}
	if(a<c)
	{
		k = a;
		a = c;
		c = k;
	}
	if(a<d)
	{
		k = a;
		a = d;
		d = k;
	}
	if(a<e)
	{
		k = a;
		a = e;
		e = k;
	}
	if(b<c)
	{
		k = b;
		b = c;
		c = k;
	}
	if(b<d)
	{
		k = b;
		b = d;
		d = k;
	}
	if(b<e)
	{
		k = b;
		b = e;
		e = k;
	}
	if(c<d)
	{
		k = c;
		c = d;
		d = k;
	}
		if(c<e)
	{
		k = c;
		c = e;
		e = k;
	}
		if(d<e)
	{
		k = d;
		d = e;
		e = k;
	}
	// a < b < c < d < e
	printf("%d %d %d",a,c,e);
}
