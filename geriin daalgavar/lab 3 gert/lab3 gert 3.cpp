//lab 3 gert bodlogo 3
#include<stdio.h>
main()
{
	int n, a, b, c, d, e, f, a1=1, b1=1, c1=1, d1=1, e1=1, f1=1, max;
	scanf("%d",&n);
		a = n / 100000;
		b = (n / 10000) % 10;
		c = (n / 1000) % 10;
		d = (n / 100) % 10;
		e = (n / 10) % 10;
		f = n % 10;
	if(n < 1000000 && n >= 100000)
	{
		a1+=(a==b)+(a==c)+(a==d)+(a==e)+(a==f);
		b1+=(b==c)+(b==d)+(b==e)+(b==f);
		c1+=(c==d)+(c==e)+(c==f);
		d1+=(d==e)+(d==f);
		e1+=(e==f);
	}
else if(n < 100000 && n >= 10000)
	{
		a1=0;
		b1+=(b==c)+(b==d)+(b==e)+(b==f);
		c1+=(c==d)+(c==e)+(c==f);
		d1+=(d==e)+(d==f);
		e1+=(e==f);
	} 
else if(n < 10000 && n >= 1000)
	{
		a1=0; b1=0;
		c1+=(c==d)+(c==e)+(c==f);
		d1+=(d==e)+(d==f);
		e1+=(e==f);
	}
else if(n < 1000 && n >= 100)
	{
		a1=0; b1=0; c1=0;
//		printf("%d %d %d",a,b,c);
		d1+=(d==e)+(d==f);
		e1+=(e==f);
	}	
else if(n < 100 && n >= 10)
	{
		a1=0; b1=0; c1=0; d1=0;
		e1+=(e==f);
	}
else if(n < 10 && n >= 1)
	{
		a1=0; b1=0; c1=0; d1=0; e1=0;
		f1=1;
	}			
	max = a1; 
	if(max < b1)
		max = b1;
	if(max < c1)
		max = c1;
	if(max < d1)
		max = d1;
	if(max < e1)
		max = e1;
	if(max < f1)
		max = f1;
		
		if(max == a1)
			printf("Hamgiin olon orson tsipr=%d",a);
		else if(max == b1)
			printf("Hamgiin olon orson tsipr=%d",b);
		else if(max == c1)
			printf("Hamgiin olon orson tsipr=%d",c);
		else if(max == d1)
			printf("Hamgiin olon orson tsipr=%d",d);
		else if(max == e1)
			printf("Hamgiin olon orson tsipr=%d",e);
		else if(max == f1)
			printf("Hamgiin olon orson tsipr=%d",f);
}
