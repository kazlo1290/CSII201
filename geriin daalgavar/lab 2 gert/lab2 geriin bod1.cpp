// lab2-iin geriin daalgavar bodlogo 1
#include<stdio.h>

main()
{
	int n, s, a, b, c, d;
	scanf("%d",&n);
	a = n / 1000;
	b = n / 100;
	b = b % 10;
	c = n / 10;
	c = c % 10;
	d = n % 10;
	s = d * 1000 + c * 100 + b * 10 + a;
	n == s && printf("1");
	n == s || printf("0");
/*	
	a = n / 1000;
//	printf("a=%d\n",a);
	b = n / 100;
	b = b % 10;
//	printf("b=%d\n",b);
	c = n / 10;
	c = c % 10;
//	printf("c=%d\n",c);
	d = n % 10;	
//	printf("d=%d\n",d);
	s = d * 1000 + c * 100 + b * 10 + a;
//	printf("%d\n",s);
	if(n == s)
		printf("1");
	else 
		printf("0");
*/
}
