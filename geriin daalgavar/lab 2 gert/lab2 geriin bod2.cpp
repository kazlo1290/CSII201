// lab2-iin geriin daalgavar bodlogo 2
// a=1 b=2 c=3 d=4
// 1234 1243 1324 1342 1423 1432  |
// 2134 2143 2413 2431 2341 2314  | ==> 24 shirheg
// 3124 3142 3214 3241 3412 3421  |
// 4123 4132 4231 4213 4312 4321  |
#include<stdio.h>

main()
{
	int i, a, b, c, d, f, too;
	scanf("%d%d%d%d",&a,&b,&c,&d);
// niit 4 orontoi too uusgej boloh bolomj: 4*3*2*1=24

	int too1 = (a*1000 + b*100 + c*10 + d);
	int too2 = (a*1000 + b*100 + d*10 + c);
	int too3 = a*1000 + c*100 + b*10 + d;
	int too4 = a*1000 + c*100 + d*10 + b;
	int too5 = a*1000 + d*100 + b*10 + c;
	int too6 = a*1000 + d*100 + c*10 + b;
	
	a == 0 && printf("0%d ",too1);
	a == 0 && printf("0%d ",too2);
	a == 0 && printf("0%d ",too3);
	a == 0 && printf("0%d ",too4);
	a == 0 && printf("0%d ",too5);
	a == 0 && printf("0%d\n",too6);

	a != 0 && printf("%d ",too1);
	a != 0 && printf("%d ",too2);
	a != 0 && printf("%d ",too3);
	a != 0 && printf("%d ",too4);
	a != 0 && printf("%d ",too5);
	a != 0 && printf("%d\n",too6);
	
	int too7 = b*1000 + a*100 + c*10 + d;
	int too8 = b*1000 + a*100 + d*10 + c;
	int too9 = b*1000 + c*100 + a*10 + d;
	int too10 = b*1000 + c*100 + d*10 + a;
	int too11 = b*1000 + d*100 + c*10 + a;
	int too12 = b*1000 + d*100 + a*10 + c;
	
	b == 0 && printf("0%d ",too7);
	b == 0 && printf("0%d ",too8);
	b == 0 && printf("0%d ",too9);
	b == 0 && printf("0%d ",too10);
	b == 0 && printf("0%d ",too11);
	b == 0 && printf("0%d\n",too12);

	b != 0 && printf("%d ",too7);
	b != 0 && printf("%d ",too8);
	b != 0 && printf("%d ",too9);
	b != 0 && printf("%d ",too10);
	b != 0 && printf("%d ",too11);
	b != 0 && printf("%d\n",too12);
	
	int	too13 = c*1000 + a*100 + b*10 + d;
	int too14 = c*1000 + a*100 + d*10 + b;
	int too15 = c*1000 + b*100 + a*10 + d;
	int	too16 = c*1000 + b*100 + d*10 + a;
	int too17 = c*1000 + d*100 + a*10 + b;
	int	too18 = c*1000 + d*100 + b*10 + a;

	c == 0 && printf("0%d ",too13);
	c == 0 && printf("0%d ",too14);
	c == 0 && printf("0%d ",too15);
	c == 0 && printf("0%d ",too16);
	c == 0 && printf("0%d ",too17);
	c == 0 && printf("0%d\n",too18);

	c != 0 && printf("%d ",too13);
	c != 0 && printf("%d ",too14);
	c != 0 && printf("%d ",too15);
	c != 0 && printf("%d ",too16);
	c != 0 && printf("%d ",too17);
	c != 0 && printf("%d\n",too18);
	
	int too19 = d*1000 + a*100 + b*10 + c;
	int too20 = d*1000 + a*100 + c*10 + b;
	int too21 = d*1000 + b*100 + a*10 + c;
	int too22 = d*1000 + b*100 + c*10 + a;
	int too23 = d*1000 + c*100 + a*10 + b;
	int too24 = d*1000 + c*100 + b*10 + a;

	d == 0 && printf("0%d ",too19);
	d == 0 && printf("0%d ",too20);
	d == 0 && printf("0%d ",too21);
	d == 0 && printf("0%d ",too22);
	d == 0 && printf("0%d ",too23);
	d == 0 && printf("0%d",too24);

	d != 0 && printf("%d ",too19);
	d != 0 && printf("%d ",too20);
	d != 0 && printf("%d ",too21);
	d != 0 && printf("%d ",too22);
	d != 0 && printf("%d ",too23);
	d != 0 && printf("%d",too24);

}
