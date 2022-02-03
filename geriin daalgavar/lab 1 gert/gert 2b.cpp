// lab 1 geriin daalgavar 2b
#include<stdio.h>
#include<math.h>
main()
{
	int a, b, degree;
	float c, radian, pi = 3.14;
	scanf("%d%d%d",&a,&b,&degree);
	radian = degree * (pi / 180);
//	printf("%f\n",radian);
	c = sqrt( pow(b,2) + pow(a,2) - 2*a*b*cos(radian));
	printf("%.2f",c);
}
