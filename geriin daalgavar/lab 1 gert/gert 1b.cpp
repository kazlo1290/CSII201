// lab 1 geriin daalgavar 1b
#include<stdio.h>
#include<math.h>

main()
{
	float a, b, c, D, x1, x2, d;
	scanf("%f%f%f",&a,&b,&c);
	D = sqrt(pow(b,2) - (4 * a)*c);
	d = (pow(b,2) - (4 * a)*c);
	if(d < 0)
		printf("Kvadrat tegshitgel shiidgui");
	else
	{
		x1 = (-1)*(b - D) / (2 * a);
		x2 = (-1)*(b + D) / (2 * a);
		printf("Tegshitgeliin shiid: x1=%.2f, x2=%.2f",x1,x2);
    }
}
