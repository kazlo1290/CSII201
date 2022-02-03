// labiin hicheel angid 6-r bodlogo
#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c,d;
	float s;
	printf("Durvun buhel too oruul: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	s = (pow( pow(a + b, 2) + d, 0.5 ) / c);
	printf("%.2f",s);
	return 0;
}
