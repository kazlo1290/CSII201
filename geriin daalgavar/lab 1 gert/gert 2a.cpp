// lab 1 geriin daalgavar 2a
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d;
	float s, x;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	s = sqrt(pow(pow(a,3) + float(b) / c, 2) + d) * d / (pow(d,2) - (a * b) / float(c));
	printf("%.2f",s);
}
