// labiin hicheel angid 5-r bodlogo
#include<stdio.h>

int main()
{
	int a,b;
	float s;
	scanf("%d%d",&a,&b);
	s=a;
	printf("%d+%d=%d\n",a,b,a + b);
	printf("%d-%d=%d\n",a,b, a - b);
	printf("%d*%d=%d\n",a,b, a * b);
	s = s / b;
	printf("%d/%d=%.2f\n",a,b, s);
	printf("%d%%%d=%d\n",a,b, a % b);
	return 0;
}
